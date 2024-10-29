#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
        // code here
        int max = INT_MIN;
        for(int i = 0; i<arr.size(); i++){
            if(max<arr[i]){
                max= arr[i];
            }
        }
        return max;
}
int main(){
    vector<int> v1 = {12,1,2,45,36,84};
    int res = largest(v1);
    cout<<res;
    return 0;
}