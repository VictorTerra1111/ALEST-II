#ifndef GRAPH_C_HPP
#define GRAPH_C_HPP

#include <string>
#include "node_c.hpp"
#include "dir_graph_c.hpp"

class graph_c: public dir_graph_c{
    public:
        graph_c(string v) : dir_graph_c(v) {}
        
        void add_aresta(string v1, string v2) override;
};

#endif