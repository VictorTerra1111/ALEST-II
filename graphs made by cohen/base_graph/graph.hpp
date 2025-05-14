#include <map>
#include <set>
#include <string>
#include <vector>

#ifndef GRAPH_H
#define GRAPH_H

using namespace std;

class Graph {
    public:
        Graph();
        Graph(string filename);

        vector<string> getAdj(string v);
        set<string> getVerts();

        void addEdge(string v, string w);

        string toDot();

    protected:
        void addToList(string v, string w);
        set<string> vertices;

    private:
        map<string, vector<string>> graph;
};

#endif