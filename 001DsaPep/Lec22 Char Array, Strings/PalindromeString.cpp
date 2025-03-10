#include <bits/stdc++.h>
using namespace std;

bool IsStringPal(string Str){
    int left= Str[0], right= Str.length()-1;
    while(left<right){
        if(left == right){
            left++;
            right++;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    string Str;
    cin>>Str;
    bool ans = IsStringPal(Str);

    if (ans == true){
        cout<<"Pal";
    }
    else{
        cout<<"Not";
    }
    return 0;
}