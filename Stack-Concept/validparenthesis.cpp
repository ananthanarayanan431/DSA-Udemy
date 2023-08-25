#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

     string name;
    cin >> name;

    stack<char> ans;

    for (auto ch:name) {
        if (ch=='[' || ch=='{' || ch=='(') {
            ans.push(ch);
        } else {
            if (ans.empty()) {
                return false;
            }
            char c = ans.top();
            ans.pop();
            if((c=='(' && ch!=')')||(c=='{' && ch!='}')||(c=='[' && ch!=']')) {
                return false;
            }
        }
    }
    if (ans.empty()) {
        cout << "Balanced Parenthesis";
    } else {
        cout << "Not Balanced Parenthesis";
    }
    return 0;
}