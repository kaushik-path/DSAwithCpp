// n=3 
// * * *
// * * *
// * * *

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    // for ( int i = 1; i <=n; i+=1){
    //     for (int j = 1; i <=n; j+=1){
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    while (i<=n){
        int j=1;
        while (j<=n){
            cout<<" * ";
            j+=1;
        }
        i+=1;
        cout<<endl;
    }
    return 0;
}