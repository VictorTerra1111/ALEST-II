#ifndef NODE_C_HPP
#define NODE_C_HPP

#include <vector>
#include <string>

using namespace std;

class node_c{
    private:
        string valor;
        vector<node_c *> vizinhos;
        bool visitado;
    public:
        node_c(string valor);
        string get_valor();
        bool get_visitado();
        vector<node_c *> get_vizinhos();
        void ad_vizinho(node_c * vizinho);
};

#endif