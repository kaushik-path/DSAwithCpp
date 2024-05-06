#include<iostream>
using namespace std;

int BinarySearch(int arr[], int l, int h, int x){
    while (l<=h)
    {
        int m = l +(h-l)/2;
        if (arr[m] == x)
            return m;
        if (arr[m]<x)
            l = m+1;
        else
            h = m-1; 
    } 
return -1;
}
int main(){
    int arr[] = { 2, 3, 4, 5, 7, 8 };
	int x = 3;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = BinarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is in at index " << result;
	return 0;
}