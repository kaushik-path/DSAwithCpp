//Write a code to store the prizes of different items by implement the concept of stack using linked list
#include <iostream>
using namespace std;

// Node structure for an item
struct Node {
    int prize;
    Node* next;

    // Constructor
    Node(int prize) : prize(prize), next(nullptr) {}
};

// Stack class
class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Function to push (add) an item's prize onto the stack
    void push(int prize) {
        Node* newNode = new Node(prize);
        newNode->next = top;
        top = newNode;
        cout << "Prize $" << prize << " added to the stack." << endl;
    }

    // Function to pop (remove) an item's prize from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << "Prize $" << temp->prize << " removed from the stack." << endl;
        delete temp;
    }

    // Function to display the prizes of items in the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Prizes of items in the stack:" << endl;
        Node* current = top;
        while (current != nullptr) {
            cout << "$" << current->prize << endl;
            current = current->next;
        }
    }

    // Destructor to deallocate memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

int main() {
    Stack stack;

    // Push some item prizes onto the stack
    stack.push(50);
    stack.push(100);
    stack.push(200);

    // Display the item prizes
    stack.display();

    // Pop an item prize from the stack
    stack.pop();

    // Display the item prizes after pop
    stack.display();

    return 0;
}
