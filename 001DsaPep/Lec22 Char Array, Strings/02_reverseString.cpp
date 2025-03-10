/*
len=    1 2 3 4 5 6
        s t r i n g
    i=  0 1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;

string isReverse(string& s){
    int left=0, right= s.length()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
    return s;
}

int main(){
    string str;
    cin>>str;
    cout<<isReverse(str);
    return 0;
}