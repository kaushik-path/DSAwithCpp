// Write a code to store the different temperature reading in terms of degree using the concept of stack
#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<double> temperatureStack;

    // Pushing temperature readings onto the stack
    temperatureStack.push(36.6);
    temperatureStack.push(37.2);
    temperatureStack.push(35.9);
    temperatureStack.push(36.1);

    // Printing the temperature readings
    while (!temperatureStack.empty()) {
        cout << temperatureStack.top() << " degrees" << std::endl;
        temperatureStack.pop();
    }

    return 0;
}
