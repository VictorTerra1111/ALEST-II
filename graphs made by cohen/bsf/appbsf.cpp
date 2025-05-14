#include <iostream>

#include "../base_graph/graph.hpp"
#include "bsf.hpp"

int main()
{
    Graph g = Graph("exemplos/tinyG.txt");
    BFS dfs = BFS(g, "0");

    for (string v : g.getVerts())
    {
        cout << v << ": " << endl;
        if (!dfs.hashPathTo(v))
            cout << "Não tem caminho" << endl;
        else
        {
            dfs.pathTo(v);
            cout << endl;
        }
    }
    return 0;
}