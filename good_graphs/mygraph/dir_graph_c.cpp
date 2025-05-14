#include <iostream>
#include <vector>
#include "dir_graph_c.hpp"
#include "node_c.hpp"

using namespace std;

template <typename T>
dir_graph_c<T>::dir_graph_c(T v)
{
    tam = 0;
    add_vertice(v);
}

template <typename T>
void dir_graph_c<T>::add_vertice(T value)
{
    node_c<T> *nodo = new node_c<T>(value);
    grafo.push_back(nodo);
    tam++;
}

template <typename T>
void dir_graph_c<T>::add_aresta(T v1, T v2)
{
    node_c<T> *nodo1 = encontra_nodo(v1);
    node_c<T> *nodo2 = encontra_nodo(v2);

    if (nodo1 != nullptr && nodo2 != nullptr)
        nodo1->ad_vizinho(nodo2);
}

template <typename T>
node_c<T> *dir_graph_c<T>::encontra_nodo(T v)
{
    for (int i = 0; i < tam; i++)
    {
        if (grafo[i]->get_valor() == v)
        {
            return grafo[i];
        }
    }
    return nullptr;
}

template <typename T>
vector<node_c<T> *> dir_graph_c<T>::get_vertices()
{
    return grafo;
}

template <typename T>
vector<node_c<T> *> dir_graph_c<T>::get_vizinhos(T v)
{
    node_c<T> *nodo = encontra_nodo(v);
    if (nodo != nullptr)
        return nodo->get_vizinhos();
    return {};
}

template <typename T>
int dir_graph_c<T>::get_grafo_size()
{
    return tam;
}
