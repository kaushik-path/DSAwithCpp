//Write a code to store the kid name by implementing the concept of queue using array
#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    string arr[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() : front(-1), rear(-1) {}

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }

    // Function to enqueue (add) a kid name
    void enqueue(string name) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        } else if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        arr[rear] = name;
        cout << "Kid name '" << name << "' added to the queue." << endl;
    }

    // Function to dequeue (remove) a kid name
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        } else if (front == rear) {
            cout << "Kid name '" << arr[front] << "' removed from the queue." << endl;
            front = rear = -1;
        } else {
            cout << "Kid name '" << arr[front] << "' removed from the queue." << endl;
            front = (front + 1) % MAX_SIZE;
        }
    }

    // Function to display the kid names in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Kid names in the queue:" << endl;
        int i = front;
        while (i != rear) {
            cout << arr[i] << endl;
            i = (i + 1) % MAX_SIZE;
        }
        cout << arr[rear] << endl;
    }
};

int main() {
    Queue queue;

    // Enqueue some kid names
    queue.enqueue("Alice");
    queue.enqueue("Bob");
    queue.enqueue("Charlie");

    // Display the kid names
    queue.display();

    // Dequeue a kid name
    queue.dequeue();

    // Display the kid names after dequeue
    queue.display();

    return 0;
}
