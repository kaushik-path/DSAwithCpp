#include<bits/stdc++.h>
using namespace std;

bool validChar(char ch){ //For check the character is valid
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
        return 1;
    }
    return 0;
}
char toLower(char ch){ //for lower the case of the character
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(string s){
    int Start =0;
    int end = s.length()-1;

    while(Start<=end){
        if(s[Start]!=s[end]){
            return 0;
        }
        else{
            Start++;
            end--;
        }
    }
    return 1;
}
bool isPalindrome(string s){ // all check in this function
    string temp = "";
    for(int i=0; i<s.length(); i++){
        if(validChar(s[i])){
            temp.push_back(s[i]);
        }
    }
    for(int i=0; i<temp.length(); i++){
        temp[i] = toLower(temp[i]);
    }
    return checkPalindrome(temp);
}
int main(){
    string str;
    // cin>>str; //Limitation: It stops reading when it encounters a space, tab, or newline.
    getline(cin, str);
    isPalindrome(str);
    if(isPalindrome(str)== 1){
        cout<< str << " Yes is Valid Palindrome"<<endl;
    }
    else{
        cout<< str << " No, is Not Valid Palindrome"<<endl;
    }
    return 0;
}