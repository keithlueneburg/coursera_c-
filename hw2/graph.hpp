#include <iostream>
#include <map>
#include <vector>

using namespace std;

// Vertex
class Vertex {
    public:
        Vertex(int value);
        void addEdge(Vertex v, int weight);
        int getValue() const;
        map<Vertex, int>::iterator beginNeighbors();

    private:
        map<Vertex, int> neighbors;
        int value;
};

// Vertex operator overloads
ostream& operator<< (ostream &os, const Vertex v);
inline bool operator<(const Vertex& lhs, const Vertex& rhs);


// Graph
class Graph {
    public:
        Graph(void);
        void addVertex(Vertex v);
        void addEdge(Vertex v1, Vertex v2, int weight);

    private:
        vector<Vertex> vertices;
};