c#ifndef BSH_HPP
#define BSH_HPP
// AJUSTAR METODOS (usar queue)
#include <vector>
#include <map>
#include <list>

#include "../base_graph/graph.hpp"

class BFS {
    private:

        Graph g;
        string inicial;
        vector<string> marked;
        map<string, string> edgeTo;
        map<string, int> distTo;

    public:
        BFS(Graph g, string inicial) {
            this->g = g;
            this->inicial = inicial;
            marked = new HashSet<>(); // hash vazio
            edgeTo = new HashMap<>(); // hash vazio
            distTo = new HashMap<>(); // hash vazio
            bfs(inicial);
        }

        void bfs(string v) {
            // criar uma fila
            marked.add(v);
            for (string w : g.getAdj(v)) {
                // Se não estiver marcado, visita
                if (!marked.contains(w)) {
                    // indica que para chegar em w
                    // viemos por v
                    edgeTo.put(w, v);
                    bfs(w);
                }
            }
        }

        bool hashPathTo(string v) {
            // retorno true se tiver caminho para v
            return marked.contains(v);
            // if(marked.contains(v))
            // return true;
            // return false;
        }

        list<string> pathTo(string v) {
            list<string> path = new list<>(); // lista vazia ou array
            if (!hashPathTo(v))
                return path;
            while (!v.equals(inicial)) {
                path.add(0, v);
                v = edgeTo.get(v);
            }
            path.add(0, inicial);
            return path;
        }
};

#endif