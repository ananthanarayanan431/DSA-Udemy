#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    int arr[num];
    for (int i=0; i<num; ++i) {
        cin >> arr[i];
    }

    int maxy = arr[0];
    int miny = arr[0];

    for (int i=0; i<num; ++i) {
        if (arr[i] < miny) {
            miny = arr[i];
        } else if (arr[i] > maxy) {
            maxy = arr[i];
        }
    }

    cout << "Minimum Element " << miny << endl;
    cout << "MAximum Element " << maxy;

    return 0;

    return 0;
}