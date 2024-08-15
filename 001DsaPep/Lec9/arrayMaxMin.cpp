#include<bits/stdc++.h>
using namespace std;

//for max in array
int getmax(int arr[], int n){
    int max = INT_MIN;
    for(int i =0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        /*in Built function Of max
            maxi = max(maxi , num[i])
        */
    }
    return max;
}
// for minimum no in array
int getmin(int arr[], int n){
    int min = INT_MAX;
    for(int i =0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        /*in Built function Of Min
            mini = min(mini , num[i])
        */
    }
    return min;
}

int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i =0 ; i<size; i++){
        cin>>num[i];
    }

    cout<<"Max array"<<getmax(num, size)<<endl;
    cout<<"Min array"<<getmin(num, size)<<endl;
    return 0;
}