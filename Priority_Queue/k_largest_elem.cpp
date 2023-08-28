#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    vector<int> arr(num,0);
    for (int i=0; i<num; ++i) {
        cin>>arr[i];
    }
    cout << "Enter the K Value " << endl;
    int k;
    cin >> k;
    priority_queue<int,vector<int>,greater<int>> miny;

    for (auto i:arr) {
        if (miny.size()<k) {
            miny.push(i);
        } 
        else if (miny.top()<i) {
            miny.pop();
            miny.push(i);
        }
    }

    cout << "Hence Min-Heap is " << endl;
    while (!miny.empty()) {
        cout << miny.top() << " ";
        miny.pop();
    }

    return 0;
}