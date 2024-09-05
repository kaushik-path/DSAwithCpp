#include<iostream>
using namespace std;

// in >> 123
// out >> 321

int main(){
    int x;
    cin>>x; // 123
    int digit; // garbage
    int n=0;
    if((x>=INT_MAX)||(x<=INT_MIN)){
            return 0;
        }
    else{
        while(x!=0){
            digit = x%10; // 123%10 = 3
            n = n*10 + digit; // n = 0*10 + 3 n=3
            x = x/10; // x= 123/10= 12
        }
        cout<<n;
        }
    return 0;
}