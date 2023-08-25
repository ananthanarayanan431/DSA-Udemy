#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string name;
    cin >> name;

    stack<char> ans;

    for (char ch:name) {
        if (!ans.empty() && ans.top()==ch) {
            ans.pop();
        } else {
            ans.push(ch);
        }
    } 

    string val="";

    while(!ans.empty()) {
        val += ans.top();
        ans.pop();
    }

    reverse(val.begin(),val.end());
    cout << val;
    return 0;

}