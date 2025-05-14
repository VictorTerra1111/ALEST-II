#ifndef GRAPH_C_HPP
#define GRAPH_C_HPP

#include "node_c.hpp"
#include "dir_graph_c.hpp"

template <typename T>
class graph_c: public dir_graph_c{
    public:
        graph_c(T v) : dir_graph_c(v) {}
        
        void add_aresta(T v1, T v2) override;
};

#endif