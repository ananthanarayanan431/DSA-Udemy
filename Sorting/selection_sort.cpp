#include<bits/stdc++.h>

using namespace std;

void print(int arr[],int n) {
    for (int i=0; i<n; ++i) {
        cout << arr[i] << " ";
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    int arr[num];
    for (int i=0; i<num; ++i) {
        cin >> arr[i];
    }

    cout << "Before Sorting" << endl;
    print(arr,num);
    cout << endl;
    for (int i=0; i<num-1; ++i) {
        int key = i;
        for (int j=i+1; j<num; ++j) {
            if (arr[key] > arr[j]) {
                key=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[key];
        arr[key]=temp;
    }

    cout << "After Sorting " << endl;
    print(arr,num);
}