#include<bits/stdc++.h>

using namespace std;

void insert_bottom(char ch,stack<char> &val) {
    if (val.empty()) {
        val.push(ch);
        return;
    }
    char ch1 = val.top();
    val.pop();
    insert_bottom(ch,val);

    val.push(ch1);
}


void reverse(stack<char> &ans1) {
    if (ans1.empty()) {return;}
    char ch = ans1.top();
    ans1.pop();
    reverse(ans1);
    insert_bottom(ch,ans1);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string name;
    cin >> name;

    stack<char> ans;
    
    for (char ch:name) {
        ans.push(ch);
    }
    reverse(ans);
    while (!ans.empty()) {
        cout << ans.top() << "";
        ans.pop();
    }

    return 0;
}