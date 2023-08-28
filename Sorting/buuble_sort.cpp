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
    for (int j=0; j<num-1-i; ++j) {
        if(arr[j]>arr[j+1]) {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
   }

    cout << "After Sorting " << endl;
    print(arr,num);
}