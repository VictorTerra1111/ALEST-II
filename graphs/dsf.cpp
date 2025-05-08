#include <iostream>

#include "dsf.hpp"
#include "Graph.hpp"

using namespace std;

void dsf::path(string v){
    marked.insert(v);
    for(string w : g.getAdj(v)){
        if(marked.find(w)){
            path(w);
        }
    }

}

dsf::dsf(Graph vg, string vinicial){
    g = vg;
    inicial = vinicial;
    marked = set<string>();
    path();
}

