#include <iostream>
#include "graph_c.hpp"

using namespace std;

void graph_c::add_aresta(string v1, string v2){
    node_c *nodo1 = encontra_nodo(v1);
    node_c *nodo2 = encontra_nodo(v2);

    if (nodo1 != nullptr && nodo2 != nullptr){
        nodo1->ad_vizinho(nodo2);
        nodo2->ad_vizinho(nodo1);
    }
}
