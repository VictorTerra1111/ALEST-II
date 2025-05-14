#ifndef DIR_GRAPH_C_HPP
#define DIR_GRAPH_C_HPP

#include <vector>
#include <string>
#include "node_c.hpp"

class dir_graph_c{
    private:
        vector<node_c *> grafo;
        int tam;
    public:
        dir_graph_c(string v);
        
        void add_vertice(string v);
        void virtual add_aresta(string v1, string v2);
        node_c* encontra_nodo(string v);

        vector<node_c *> get_vertices();
        vector<node_c *> get_vizinhos(string v);
        int get_grafo_size();
};

#endif