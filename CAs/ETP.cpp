#include <bits/stdc++.h>
using namespace std;
class Stack {
    int top;

public:
    int MAX = 5;
    int a[];

    Stack() { top = -1; }

    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow";
            return false;
        }
        else {
            a[++top] = x;
            cout << x << " pushed into stack\n";
            return true;
        }
    }
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow";
            return 0;
        }
        else {
            int x = a[top--];
            return x;
        }
    }
    bool isEmpty() {
            return (top < 0);
        }
};

int main() {
    class Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.pop() << " Popped from stack\n";
    return 0;
}