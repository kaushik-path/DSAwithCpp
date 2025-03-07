#include<bits/stdc++.h>
using namespace std;

int getLength(char ch[]){
    int count =0;
    for(int i=0; ch[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char ch[10];
    cin>>ch;
    int len = getLength(ch);
    cout<<"Name: "<<ch<<endl;
    cout<<"length :"<< len <<endl;
    return 0;
}
/*In Vector<char>& str : there is an method where we can already find a length with inbuild function which is str.size()*/