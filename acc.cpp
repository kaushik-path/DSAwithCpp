#include<bits/stdc++.h>
using namespace std;

void inArr(int arr[], int s){
    for (int i = 0; i < s; i++)
    {
        cin>>arr[i];
    }
}

void avg(int arr[], int s){
    int avg =0;
    int count=0;
    for (int i = 0; i < s; i++)
    {
        if(arr[i]%3==0 && arr[i]%2==0){
            avg=arr[i]+avg; // 6,9,2,4,
            count++;
        }
    }
    int ans = avg/count;
    cout<<ans;
}

int main(){
    int  N; // int N = nums.size();
    cin>>N;
    int nums[100]; // int num[] = {6,9,2,8};
    inArr(nums, N);
    avg(nums,N);

    return 0;
}