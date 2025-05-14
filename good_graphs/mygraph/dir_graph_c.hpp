#ifndef DIR_GRAPH_C_HPP
#define DIR_GRAPH_C_HPP

#include <vector>
#include "node_c.hpp"

template <typename T>
class dir_graph_c
{
private:
    std::vector<node_c<T> *> grafo;
    int tam;

public:
    dir_graph_c(T v);
    void add_vertice(T v);
    virtual void add_aresta(T v1, T v2);
    node_c<T> *encontra_nodo(T v);

    std::vector<node_c<T> *> get_vertices();
    std::vector<node_c<T> *> get_vizinhos(T v);
    int get_grafo_size();
};

#endif
