#ifndef DSF_HPP
#define DSF_HPP

#include <vector>
#include "../mygraph/graph_c.hpp"

// Deph Search First (procura em profundidade)

template <typename T>
class dsf_c{
    public:
        dsf_c(graph_c &grafo, T valor);

        bool tem_caminho(T v);
        std::vector<T> caminho(T v);
};

#endif