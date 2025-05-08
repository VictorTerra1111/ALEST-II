#include <map>
#include <string>
#include <vector>

#include "graph.hpp"

#ifndef DIGRAPH_H
#define DIGRAPH_H

class Digraph : public Graph {
 public:
  Digraph() : Graph() {}
  Digraph(std::string filename);
  void addEdge(std::string v, std::string w);
  std::string toDot();
};

#endif