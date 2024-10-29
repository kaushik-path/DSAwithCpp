#include <bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size){
    int ans=0;
    for(int i=0; i<size ;i++){
        ans= ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[] = {1,5,6,5,1};
    int unique = findUnique(arr,5);
    // unique means comes only one or single time
    cout<<unique;
    return 0;
}