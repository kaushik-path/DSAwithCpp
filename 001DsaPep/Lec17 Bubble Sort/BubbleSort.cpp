#include <bits/stdc++.h>
using namespace std;

void input(vector<int> arr, int n){
    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }
}

void BubbleSort(vector<int> arr, int n){
    // 10, 2, 5, 3, 7, 9
    for(int i =1; i<n ; i++){
        bool swapped = false;
        for(int j=0; j<n-i ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
    swapped = false;
    break;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    input(v,n);
    BubbleSort(v,n);
    
    for(int i=0; i<n ; i++){
        cout<<v[i]<<;
    }
    return 0;
}