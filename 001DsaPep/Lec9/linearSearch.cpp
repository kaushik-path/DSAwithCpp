#include<bits/stdc++.h>
using namespace std;

bool searcher(int arr[], int n, int key){
        for(int i=0; i<n; i++){
            if(key==arr[i]){
                return 1;
            }
            return 0;
        }
        return 0;
}

int main(){
    int arr[5]={1,5,7,9,2};
    int key;
    cin>> key;
    bool found = searcher(arr,5,key);
    if(found){
        cout<<"Yes it have on it"<<endl;
    }
    else{
        cout<<"Nah not there";
    }
    return 0;
}