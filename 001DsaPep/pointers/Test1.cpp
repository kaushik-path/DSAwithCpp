#include<iostream>
using namespace std;

int main() {
    int firstvalue = 5, secondvalue = 15;
    char thirdvalue = 'a';


    int * p1, * p2;
    char * p3;

    cout<<"0st"<<endl;
    cout<<p1<<" "<<p2<<" "<<p3<<" "<<endl; // garbege value address
    cout<<endl;
    cout<<"1st"<<endl;
    cout<<&p1<<" "<<&p2<<" "<<&p3<<" "<<endl; // address
    cout<<endl;

    //cout<<"-1st"<<endl;
    //cout<<*p1<<" "<<*p2<<" "<<*p3<<" "<<endl; // empty variable cause its doesnt have anything connected
    
    p1 = & firstvalue; // p1 = address of firstvalue
    p2 = & secondvalue; // p2 = address of secondvalue 
    p3 = & thirdvalue; // p3 = address of thirdvalue

    cout<<"2nd"<<endl;
    cout<<*p1<<" "<<*p2<<" "<<*p3<<" "<<endl; //
    cout<<endl;
    
    * p1 = 10; // value pointed to by p1 = 10
    cout<<"*p1-> "<<*p1<<endl;
    * p2 = * p1; // value pointed to by p2 = value pointed to by p1
    cout<<"*p2-> "<<*p2<<endl;
    cout<<endl;

    cout<<"after p1=p2"<<endl;
    p1 = p2; // p1 = p2 (value of pointer is copied)
    cout<<"p1-> "<<p1<<endl;
    cout<<"p2-> "<<p2<<endl;
    
    
    * p1 = 20; // value pointed to by p1 = 20
    cout<<"p1-> "<<p1<<endl;
    * p3 = 'b'; // value pointed to by p3 = ‘b ’
    
    cout<<endl;
    cout << "firstvalue is " << firstvalue << endl;//20
    cout << "secondvalue is " << secondvalue << endl;//10
    cout << "thirdvalue is " << thirdvalue << endl;//b
    return 0;
}