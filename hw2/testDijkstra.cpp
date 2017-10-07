/*
* Test implementation of Dijkstra's shortest path algorithm
*
* Author: Keith Lueneburg
*/

#include <iostream>
#include <vector>

#include "graph.hpp"

using namespace std;



int main() {
    Vertex a = Vertex(1);
    Vertex b = Vertex(2);
    Vertex c = Vertex(3);
    Vertex d = Vertex(4);
    Vertex e = Vertex(5);
    Vertex f = Vertex(6);
    Vertex g = Vertex(7);
    Vertex h = Vertex(8);

    Graph gr = Graph();
    gr.addVertex(a);
    gr.addVertex(b);
    gr.addVertex(c);
    gr.addVertex(d);
    gr.addVertex(e);
    gr.addVertex(f);
    gr.addVertex(g);
    gr.addVertex(h);
    cout << "Not implemented" << endl;
    return 0;
}