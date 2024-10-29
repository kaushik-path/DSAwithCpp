#include<bits/stdc++.h>
using namespace std;
int getSecondLargest(vector<int> &arr) {
        // Code Here
        int max = INT_MIN;
        int secMax = INT_MIN;
        for(int i=0;  i<arr.size(); i++){
            // 12 35 1 10 34 1
            if(max<arr[i]){
                secMax=max;
                max=arr[i];
            }
            else if(arr[i]>secMax && arr[i]!=max){
                secMax = arr[i];
            }
        }
        
        if(max==secMax){
            return -1;
        }
        else {
            return secMax;
        }
    }
int main(){
    vector<int> v1 ={22,2,3,4,6,8,1,1,0,25,03,5,22,33,4,15};
    int res = getSecondLargest(v1);
    cout<<res;
    return 0;
}