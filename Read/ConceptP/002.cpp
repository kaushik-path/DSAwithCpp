// 02 write A code to implement circular queue for storing prices of items

#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V; // number of vertices
    list<int> *adj; // pointer to an array containing adjacency lists

public:
    Graph(int V){
    this->V = V;
    adj = new list<int>[V];
    }; // constructor

    // function to add an edge to the graph
    void addEdge(int v, int w) {
    adj[v].push_back(w); // add w to v's list
    adj[w].push_back(v); // if the graph is undirected, uncomment this line to add v to w's list
    };

    // function to print the adjacency list representation of the graph
    void printGraph(){
    for (int v = 0; v < V; ++v) {
        cout << "Adjacency list of vertex " << v << ":\n";
        cout << "head";
        for (auto it = adj[v].begin(); it != adj[v].end(); ++it)
            cout << " -> " << *it;
        cout << endl;
        }
    };
};

int main() {
    // Create a graph with 5 vertices
    Graph g(5);

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    // Print the adjacency list representation of the graph
    g.printGraph();

    return 0;
}
