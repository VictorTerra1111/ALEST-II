#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "dir_graph_c.hpp"
#include "node_c.hpp"

using namespace std;

dir_graph_c::dir_graph_c(string v)
{
    add_vertice(v);
}

void dir_graph_c::add_vertice(string value)
{
    node_c * nodo = new node_c(value);
    grafo.push_back(nodo);
    tam++;
}

void dir_graph_c::add_aresta(string v1, string v2)
{
    node_c *nodo1 = encontra_nodo(v1);
    node_c *nodo2 = encontra_nodo(v2);

    if (nodo1 != nullptr && nodo2 != nullptr)
        nodo1->ad_vizinho(nodo2);
}

node_c *dir_graph_c::encontra_nodo(string v)
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

vector<node_c *> dir_graph_c::get_vertices()
{
    return grafo;
}
vector<node_c *> dir_graph_c::get_vizinhos(string v)
{
    node_c *nodo = encontra_nodo(v);
    return nodo->get_vizinhos();
}

int dir_graph_c::get_grafo_size()
{
    return tam;
}