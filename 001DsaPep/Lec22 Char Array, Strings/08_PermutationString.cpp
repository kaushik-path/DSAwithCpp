/*  S1 = eibdacni
    S2 = ac
    o/p= True
*/
#include<bits/stdc++.h>
using namespace std;

bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}
// Count the Char in array and index++
bool checkInclusion(string s1, string s2){
    int count1[26]= {0};
    int Sz1 = s1.length(), Sz2 = s2.length();
    for(int i= 0; i<Sz1; i++){
        int index = s1[i]-'a';
        count1[index]++;
    }
    int i=0;
    int count2[26]={0};
    
    while (i<Sz1 && i<Sz2){
        int index = s2[i]-'a';
        count2[index]++;
        i++;
    }
    
    if(checkEqual(count1,count2)){
        return 1;
    }
    
    while (i<Sz2){
        char newChar = s2[i];
        int index = newChar-'a';
        count2[index]++;

        char oldChar = s2[i-Sz2];
        index = oldChar-'a';
        count2[index]--;

        i++;
        if(checkEqual(count1, count2)){
            return 1;
        }
    }
    return 0;
}
int main(){
    string Str1, Str2;
    cin>>Str1>>Str2;
    if(checkInclusion){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}