#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target){
            end = mid + 1;
        }else {
            start = mid - 1;
            }
    }
    return -1;
}

int main()
{
    vector<int> arr = {5, 9 ,10, 20, 26, 39, 42, 61};
    int target = 9;
    int result = binarySearch(arr, target);

    cout << "Target Index is : " << target;
    return 0;

}