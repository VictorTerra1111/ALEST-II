#ifndef DSF_HPP
#define DSF_HPP

#include "Graph.hpp"
#include <set>

class dsf{
    private:
        Graph g;
        string inicial;
        set<string> marked;

        void path(string v);

    public:
        dsf(Graph vg, string vinicial);
        void hasPathTo(Graph v);
};

#endif