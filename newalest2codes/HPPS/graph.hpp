#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "node.hpp"
#include <string>
#include <list>

class Graph{
    private:
        list<Node> lista;
        int tam;
        bool dirigido;
    public:
        Graph(list<Node> a, bool vdir);
        void add_connect(string orig, string dest);
        list<Node> neighbours(Node a);
};

#endif