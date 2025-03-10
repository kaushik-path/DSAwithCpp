#include<bits/stdc++.h>
using namespace std;

string remOcc(string s, string part){
    while(s.length()!=0 && s.find(part)< s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string str,part;
    cin>>str>>part;
    cout<<remOcc(str,part);
    return 0;
}