#include<bits/stdtr1c++.h>
using namespace std;

int main(){
    
    array<int, 5> k ={2,1,5,4,6};
    int size = k.size();
    for (int i = 0; i < size; i++)
    {
        cout<<k[i]<<endl;
    }
    cout<<"Element at 2nd : "<< k.at(2)<<endl; // 5
    cout<<"empty or not : "<< k.empty()<<endl; // if empty then 0 else 1
    cout<<"First element  : "<<k.front()<<endl; // 2 as a first element
    cout<<"last Element : "<<k.back()<<endl; // 6 as a last element
    
    return 0;
}