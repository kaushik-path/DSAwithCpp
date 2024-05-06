#include <iostream>
using namespace std;
class Graph {
private:
    int **adjMatrix;
    int numVertices;
public:
//create a consturcter
    Graph(int numVertices) {
        this->numVertices = numVertices;
        adjMatrix = new int*[numVertices];
        for (int i = 0; i < numVertices; ++i) {
            adjMatrix[i] = new int[numVertices];
            for (int j = 0; j < numVertices; ++j) {
                adjMatrix[i][j] = 0;
            }
        }
    }
    void addEdge(int source, int destination) {

        adjMatrix[source][destination] = 1;
        adjMatrix[destination][source] = 1;
    }
    void printMatrix() {
        cout << "Adjacency Matrix:" << endl;
        for (int i = 0; i < numVertices; ++i) {
            for (int j = 0; j < numVertices; ++j) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    ~Graph() {
        for (int i = 0; i < numVertices; ++i) {
            delete[] adjMatrix[i];
        }
        delete[] adjMatrix;
    }
};
int main() {
    Graph graph(5);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);
    graph.printMatrix();
    return 0;
}