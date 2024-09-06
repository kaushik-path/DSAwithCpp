#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v (10,2); // 10 size and element is 2

    vector<int> last(v);
    cout<<"Print last"<<endl;
    for(int i : last){
        cout<<i<<" ";  //2 2 2 2 2 2 2 2 2 2 
    }
    cout<<endl;

//
    vector<int> a; // creating a vector 
    cout<<a.capacity()<<endl; // capacity of the vector which will be 0 now

    a.push_back(1); // insert 1 in a vector where the size 1
    cout<<a.capacity()<<endl; // capacity of the vector 1

    a.push_back(2); // insert 2 in a vector where the size 2
    cout<<a.capacity()<<endl; // capacity of the vector 2

    a.push_back(3);
    cout<<a.capacity()<<endl; // capacity of the vector 4

    a.push_back(4);
    cout<<a.capacity()<<endl; // capacity of the vector 4

    a.push_back(5);
    cout<<a.capacity()<<endl; // capacity of the vector 8

    cout<<"Size : "<<a.size()<<endl; // now the size is 3 and the capacity will be 4
    
    cout<<"Front element : "<< a.front() <<endl; // first element
    cout<<"last element : "<< a.back() <<endl; // last element

//
    cout<<"Before pop : "<<endl;
    for(int i:a){
        cout<<i<< " ";
    }
    cout<<endl;
        a.pop_back();
    cout<<"After pop : "<<endl;
    for(int i:a){
        cout<<i<< " ";
    }
     cout<<endl;

//
    cout<<"Before clear size : "<<endl;
    for(int i:a){
        cout<<i<< " ";
    }
    cout<<endl;
    a.clear();
    cout<<"After clear size : "<<endl;
    for(int i:a){
        cout<<i<< " ";
    }
    cout<<endl;

    return 0;
}