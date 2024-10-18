#include<bits/stdc++.h>
using namespace std;

int First (int arr[], int n, int k){
    int start = 0, end = n-1, mid = start + (end-start)/2;
    int ans =-1;
    while (start<=end)
    {
        if(arr[mid]==k){
            ans= mid;
            end = mid-1;
        }
        else if(k>arr[mid]){
            start = mid + 1;
        }
        else if(k<arr[mid]){
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int Last (int arr[], int n, int k){
    int start = 0, end = n-1, mid = start + (end-start)/2;
    int ans =-1;
    while (start<=end)
    {
        if(arr[mid]==k){
            ans= mid;
            start = mid+1;
        }
        else if(k>arr[mid]){
            start = mid + 1;
        }
        else if(k<arr[mid]){
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}


int main(){
    
    int arr[7] ={1,2,2,3,3,3,3};
    int F= First(arr,7,3);
    int L= Last(arr,7,3);
    cout<< F<<" "<<L;
    
    return 0;
}