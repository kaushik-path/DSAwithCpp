#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
}

int swapArr(int arr[], int n){
    int start = 0;
    int end = n-1;
    while (start<=end)
    swap(arr[start++], arr[end--]);
        // start++;
        // end--;
    
    return 0;
}

int main(){
    int size;
    cin>>size;
    int array[100];
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    printArr(array, size);
    cout<< endl;
    swapArr(array, size);
    printArr(array, size);
    cout<< endl;
    return 0;
}