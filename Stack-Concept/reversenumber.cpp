#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    stack<int> ans;

    while (num>0) {
        ans.push(num%10);
        num=num/10;
    }

    int reverse=0;
    int digit=0,mul=1;

    while (!ans.empty()) {
        digit=ans.top();
        reverse += digit*mul;
        mul=mul*10;
        ans.pop();
    }

    cout << "Reverse Number " << reverse;
    return 0;
}