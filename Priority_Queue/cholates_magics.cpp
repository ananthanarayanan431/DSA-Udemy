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

    //Given 'N' bags, Each bags contains 'Bi' cholates. There is a kid and a magician.
    //In one unit of time,kid chooses a random bag i, east bi cholates then the magician fill the ith bags with floor(bi/2) cholates
    // Find the maximum no of cholates that kid can eat in 'A' unit of time

    priority_queue<int> maxy;

    for(auto i:arr) {
        maxy.push(i);
    }
    int sum =0;
    while(k--) {
        sum += maxy.top();
        maxy.push(maxy.top()/2);
        maxy.pop();
    }

    cout << "MAximum no of cholates "<< sum;
    return 0;
}