/*
* Graph class
*
* Author: Keith Lueneburg
*/

#include<iostream>
#include <vector>

#include "graph.hpp"

using namespace std;


// Vertex methods

// constructor
Vertex::Vertex(int value) {
    this->value = value;
     neighbors = map<Vertex, int>();
}

// Add a weighted edge to the vertex
void Vertex::addEdge(Vertex v2, int weight) {
    neighbors.insert(pair<Vertex, int>(v2, weight));
}

// Get the vertex's value
int Vertex::getValue() const{
    return this->value;
}

// Returns iterator to the vertex's neighbors.
map<Vertex, int>::iterator Vertex::beginNeighbors() {
    return this->neighbors.begin();
}

// Overload '<' operator to support using Vertex as a std::map key
inline bool operator<(const Vertex& lhs, const Vertex& rhs) {
    return lhs.getValue() < rhs.getValue();
}

ostream& operator<< (ostream &os, const Vertex v) {
    return os << v.getValue();
}

// Graph methods

// constructor
Graph::Graph(void) {
    vertices = vector<Vertex>();
}

// Add a vertex to the graph
void Graph::addVertex(Vertex v) {
    vertices.push_back(v);
}

// Add a weighted edge between two vertices.
// Note: Caller responsible for ensuring the Graph contains both Vertex arguments
void Graph::addEdge(Vertex v1, Vertex v2, int weight) {
    v1.addEdge(v2, weight);
    v2.addEdge(v1, weight);
}


