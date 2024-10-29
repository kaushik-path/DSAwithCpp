#include<bits/stdc++.h>
using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int mid = start +(end -start)/2;
        while(start<end){
            if(arr[mid]<arr[mid+1]){
                start = mid+1;
            }
            else {
                end =mid;
            }
            mid = start +(end -start)/2;
        }
        //return the index
        return start;
    }
int main(){
    int n;
    cin>>n;
    vector<int> V(n);

    //insert element in vector
    for(int i=0; i<n; i++){
        cin>>V[i];
    }
    
    int peakEleIndex = peakIndexInMountainArray(V);
    cout << peakEleIndex;

    return 0;
}