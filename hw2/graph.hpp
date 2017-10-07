#include <vector>

using namespace std;

class Vertex {
    public:
        Vertex(int value);
        void addEdge(Vertex v);
    private:
        vector<Vertex> adjacent;
        int value;
};

class Graph {
    private:
        vector<Vertex> vertices;

    public:
        Graph(void);
        void addVertex(Vertex v);
        void addEdge(Vertex v1, Vertex v2);
};