#include <iostream>
#include <vector>
#include "node_c.hpp"

using namespace std;

template <typename T>
node_c<T>::node_c(T valor){
    this->valor;
}

template <typename T>
void node_c<T>::ad_vizinho(node_c<T> * vizinho){
    vizinhos.push_back(vizinho);
}

template <typename T>
T node_c<T>::get_valor(){
    return valor;
}

template <typename T>
bool node_c<T>::get_visitado(){
    return visitado;
}

template <typename T>
vector<node_c<T>*> node_c<T>::get_vizinhos(){
    return vizinhos;
}