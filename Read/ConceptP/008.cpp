//
#include <bits/stdc++.h>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to perform arithmetic operation
int performOperation(char operation, int operand1, int operand2) {
    switch (operation) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 == 0) {
                cout << "Error: Division by zero!" << endl;
                exit(EXIT_FAILURE);
            }
            return operand1 / operand2;
        default:
            return 0;
    }
}

// Function to evaluate postfix expression
int evaluatePostfix(string postfix) {
    stack<int> s;

    for (char& c : postfix) {
        if (isdigit(c)) {
            s.push(c - '0');
        } else if (isOperator(c)) {
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            int result = performOperation(c, operand1, operand2);
            s.push(result);
        }
    }

    return s.top();
}

// Function to convert infix expression to postfix expression
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;

    for (char& c : infix) {
        if (isdigit(c)) {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Pop '('
        } else if (isOperator(c)) {
            while (!s.empty() && s.top() != '(' && c != '^' && ((s.top() == '*' || s.top() == '/') || (c == '+' || c == '-'))) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter the infix expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}
