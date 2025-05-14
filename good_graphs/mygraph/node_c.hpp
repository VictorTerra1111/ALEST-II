#ifndef NODE_C_HPP
#define NODE_C_HPP

#include <vector>

template <typename T>
class node_c{
    private:
        T valor;
        std::vector<node_c<T> *> vizinhos;
        bool visitado;
    public:
        node_c(T valor);
        T get_valor();
        bool get_visitado();
        std::vector<node_c<T> *> get_vizinhos();
        void ad_vizinho(node_c<T> * vizinho);
};

#endif