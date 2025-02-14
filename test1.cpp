// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void displayArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

void displayVec(vector<int> arr){

}

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i =2 ; i < n/2; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
    
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int prime = isPrime(n);
    if(prime==1){
        cout<< "prime"<< endl;
    }else{
        cout<<"not a prime"<<endl;
    }
    int size;
    cin>>size;
    if (size <= 0 || size > 100) {
        cout << "Invalid size!" << endl;
        return 1; // Exit with an error
    }
    int arr[100];
    displayArr(arr, size);
    vector<int> Vec;
    displayVec(Vec);
    return 0;
}