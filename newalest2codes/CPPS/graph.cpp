#include <iostream>
#include "../HPPS/graph.hpp"

using namespace std;

Graph::Graph(list<Node> a, bool vdir)
{
    lista = a; // ? confirmar
    dirigido = vdir;
}

void Graph::add_connect(string orig, string dest)
{
    Node *aux_orig;
    Node *aux_dest;
    for (auto i : lista)
    {
        string tocompare = i.get_inf();
        if (tocompare == orig)
        {
            aux_orig = &i;
            break;
        }
        else
            continue;
    }

    for (auto i : lista)
    {
        string tocompare = i.get_inf();
        if (tocompare == dest)
        {
            aux_dest = &i;
            break;
        }
        else
            continue;
    }

    if (dirigido)
    {
        aux_orig->add_adj(&aux_dest);
    }
}

list<Node> Graph::neighbours(Node a)
{
}