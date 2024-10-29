#include <bits/stdc++.h>
using namespace std;
int reverse(int x) {
    int digit, ans =0;
    while(x!=0){
        digit = x%10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > INT_MAX % 10)) {
            return 0; // Overflow case
        }
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < INT_MIN % 10)) {
            return 0; // Underflow case
        }
        ans = ans*10 + digit;
            x/=10;
            }
        return ans;
    }
int main(){
    int a;
    cin>>a;
    int ans = reverse(a);
    cout<<ans;
    return 0;
}