#ifndef BSF_HPP
#define BSF_HPP

#include <vector>
#include "../mygraph/graph_c.hpp"

// BreadthFirstSearch (VERIFICAR FUNCIONAMENTO)

template <typename T>
class dsf : public graph_c
{
private:
	T s;
	vector<T> marked;
	vector<int> edgeTo;
	vector<int> _distTo;
public:
	dsf(graoh_c &grafo, T s);
	bool tem_caminho(T v);
	std::vector<T> caminho(T v);
	int distancia(v);
};

#endif