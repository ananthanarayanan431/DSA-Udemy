#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    // Given an array 'A', representing no of vacant seats in each row of a stadium. You need to see tickets to 'B' people
    // Each seat cost equal to no of vacant seat it belongs to. The task is to maximize the profit by selling the tickets to 'B' people
    int num;
    cin >> num;

    vector<int> arr(num,0);
    for (int i=0; i<num; ++i) {
        cin>>arr[i];
    }
    cout << "Enter the 'N' Value: " << endl;
    int k;
    cin >> k;

    priority_queue<int> maxy;

    for (auto i:arr) {
        maxy.push(i);
    }

    int sum=0;
    while(k--) {
        sum+=maxy.top();
        maxy.pop();
    }

    cout << "Maximum Profit " << sum;
    return 0;
}