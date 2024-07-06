// Sample output input
// 1 input arr[]= {1,2,6,5,8,7}
// output ={2,1,5,6,7,8}
// 2 input arr[]= {3,4,6,2,5}
// output ={4,3,2,6,5}

#include <bits/stdc++.h>
using namespace std;

void swapArrAlt(int arr[], int size){
    for (int i = 0; i < size; i+=2){
        if (i+1<size){
            //swap(arr[i],arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    } 
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int even[4] = {2,6,4,2};
    int odd[3] = {1,3,2};
    swapArrAlt(even, 4);
    printArr(even,4);
    swapArrAlt(odd, 3);
    printArr(odd,3);
    return 0;
}