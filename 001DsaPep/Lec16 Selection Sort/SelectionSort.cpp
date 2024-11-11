#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> arr, int n) {
    //3,9,8,6,5,4
    for (int i = 0; i < arr.size(); i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3,9,8,6,5,4};
    // For array >> int n = sizeof(arr) / sizeof(arr[0]);
    // for vector
    int n = arr.size();
    SelectionSort(arr, n);

    return 0;
}
