#include<bits/stdc++.h>
using namespace std;

string replaceStr(string &s){
    string temp = "";
    for(int i= 0 ; i<s.length(); i++){
        if(s[i]==' '){
            temp += "@40";
        }
        else{
            temp += s[i];
        }
    }
    return temp;
}
int main(){
    string str;
    getline(cin,str);
    cout<<str<<endl;
    cout<<replaceStr(str);
    return 0;
}