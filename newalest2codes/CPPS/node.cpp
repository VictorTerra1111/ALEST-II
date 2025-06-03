#include <iostream>
#include "../HPPS/node.hpp"

using namespace std;

Node::Node(string infv)
{
    inf = infv;
}

void Node::add_adj(Node n)
{
    adj.push_front(n);
}

string Node::get_inf()
{
    return inf;
}
list<Node> Node::get_adj(){
    return adj;
}