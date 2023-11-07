#include <bits/stdc++.h>
#define pd push_back
#define FOR(n) for (int i=0; i<n; ++i)
#define endl "\n"

using namespace std;

// Time complexity -> O(2N) -> O(N)


int highest(vector<int> arr) 
{
	int n = arr.size();
	int largest = 0;
	int i=1;


     // Check arr[i] is a peak or not
	while (i<=n-2){
		// Do work
		if (arr[i]>arr[i-1] && arr[i]>arr[i+1]) {

			int cnt = 1;
			int j = i;

			// Backward Count
			while (j>=1 && arr[j]>arr[j-1]) {
				j--;
				cnt++;
			}

			//Forward count
			while (i<=n-2 && arr[i]>arr[i+1]) {
				i++;
				cnt++;
			}
			largest=max(largest,cnt);
		}
		else {
			i++;
		}
	}
	return largest;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> arr = {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};

	cout << highest(arr) << endl;

	return 0;
}