#include <iostream>
#include "graph_c.hpp"

using namespace std;

template <typename T>
void graph_c<T>::add_aresta(T v1, T v2){
    node_c *nodo1 = encontra_nodo(v1);
    node_c *nodo2 = encontra_nodo(v2);

    if (nodo1 != nullptr && nodo2 != nullptr){
        nodo1->ad_vizinho(nodo2);
        nodo2->ad_vizinho(nodo1);
    }
}
