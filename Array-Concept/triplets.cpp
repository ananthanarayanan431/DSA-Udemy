#include <bits/stdc++.h>
#define pd push_back
#define FOR(n) for (int i=0; i<n; ++i)
#define endl "\n"

using namespace std;
// Time Complexity -> O(NlogN) + O(N^2) == O(N^2)

vector<vector<int>> triple(vector<int> arr,int sum) {

	// Logic
	int n = arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>> result;

	// Pick every arr[i] and perform pair sum approach
	for (int i=0; i<=n-3; ++i) {

		int j = i+1;
		int k = n-1;

		while (j<k) {
			int current_sum = arr[i];
			current_sum += arr[j];
			current_sum += arr[k];
			if (current_sum==sum) {
				result.pd({arr[i],arr[j],arr[k]});
				j++;
				k--;
			}
			else if (current_sum>sum) {
				k--;
			} 
			else {
				j++;
			}
		}
	}
	return result;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> arr = {1,2,3,4,5,6,7,8,9,15};
	int target = 18;


	auto ans = triple(arr,target);

	for (auto v:ans) {
		for (auto num:v) {
			cout << num << ",";
		}
		cout << endl;
	}
	return 0;
}