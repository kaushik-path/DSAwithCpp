//Write a code to store the project titles by implementing concept of queue using linked list
#include <bits/stdc++.h>
using namespace std;

// Node structure for a project title
struct Node {
    string title;
    Node* next;

    // Constructor
    Node(string title) : title(title), next(nullptr) {}
};

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Function to enqueue (add) a project title
    void enqueue(string title) {
        Node* newNode = new Node(title);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Project title '" << title << "' added to the queue." << endl;
    }

    // Function to dequeue (remove) a project title
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        cout << "Project title '" << temp->title << "' removed from the queue." << endl;
        delete temp;
    }

    // Function to display the project titles in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Project titles in the queue:" << endl;
        Node* current = front;
        while (current != nullptr) {
            cout<<current->title << endl;
            current = current->next;
        }
    }

    // Destructor to deallocate memory
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};

int main() {
    Queue queue;

    // Enqueue some project titles
    queue.enqueue("Project A");
    queue.enqueue("Project B");
    queue.enqueue("Project C");

    // Display the project titles
    queue.display();

    // Dequeue a project title
    queue.dequeue();

    // Display the project titles after dequeue
    queue.display();

    return 0;
}
