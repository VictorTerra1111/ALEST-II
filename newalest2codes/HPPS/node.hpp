#ifndef NODE_HPP
#define NODE_HPP

#include <string>
#include <list>

using namespace std;

class Node{
    private:
        string inf;
        list<Node> adj;

    public:
        Node(string infv);
        void add_adj(Node n);
        string get_inf();
        list<Node> get_adj();
};

#endif