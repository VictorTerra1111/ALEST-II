#include <iostream>
#include <string>
#include <vector>
#include "node_c.hpp"

using namespace std;

node_c::node_c(string valor){
    this->valor;
}

void node_c::ad_vizinho(node_c * vizinho){
    vizinhos.push_back(vizinho);
}

string node_c::get_valor(){
    return valor;
}

bool node_c::get_visitado(){
    return visitado;
}
vector<node_c*> node_c::get_vizinhos(){
    return vizinhos;
}