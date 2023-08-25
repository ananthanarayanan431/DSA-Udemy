#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    queue<int> ans;

    while (num>0) {
        ans.push(num%10);
        num=num/10;
    }

    while(!ans.empty()) {
        cout << ans.front() << " ";
        ans.pop();
    }
    return 0;
}