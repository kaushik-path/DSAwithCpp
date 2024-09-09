#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;

    list<int> n(5,100);    
    cout<<"Print N  : "<<endl;
    for (int i : n)
    {
       cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_back(5);
    l.push_back(4);
    l.push_front(6);
    l.push_front(2);
    l.push_front(9);
    cout<<"Print List  : ";
    for (int i : l)
    {
       cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After Erase  : "<<endl;
    for (int i : l)
    {
       cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list "<<l.size()<<endl;
    return 0;
}