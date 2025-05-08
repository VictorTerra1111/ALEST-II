#include <iostream>
#include "Graph.hpp"
#include "dsf.hpp"

using namespace std;


int main(){
    Graph g("exemplos/tinyG.txt");
    dsf d(g, "0");
  
    
    for (auto const &v : g.getVerts()) {
        cout << v << ": ";
        if (d.hasPathTo(v)) {
            for (auto const &w : d.pathTo(v))
            cout << w << " ";
        }
        cout << endl;
    }
    return 0;
}