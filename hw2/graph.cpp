/*
* Graph class
*
* Author: Keith Lueneburg
*/

#include <vector>

#include "graph.hpp"

using namespace std;


Vertex::Vertex(int value) {
    this->value = value;
     adjacent = vector<Vertex>();
}

void Vertex::addEdge(Vertex v2) {
    adjacent.push_back(v2);
}


Graph::Graph(void) {
    vertices = vector<Vertex>();
}

void Graph::addVertex(Vertex v) {
    vertices.push_back(v);
}

void Graph::addEdge(Vertex v1, Vertex v2) {
    // Caller should ensure the Graph contains both Vertex arguments
    v1.addEdge(v2);
    v2.addEdge(v1);
}


