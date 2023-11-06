#include <bits/stdc++.h>
#define pb push_back

using namespace std;


// 1. Brute force - O(N^2)
// 2. Binary Serach - O(NlogN)
// 3. Data Strucutres - O(N)


vector<int> pairsum(vector<int> arr,int sum) {
	vector<int> result;
	unordered_set<int> s;

	for (int i=0; i<arr.size(); ++i) {
		int x = sum - arr[i];
		if (s.find(x)!=s.end()) {
			result.push_back(x);
			result.push_back(arr[i]);
			return result;
		}
		s.insert(arr[i]);
	}
	return {};
}



int main() 
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> arr = {10,5,2,3,-6,11};
	int target = 4;

	auto ans = pairsum(arr,target);

	if (ans.size()==0) {
		cout << "NO Such pair";
	} else {
		cout << ans[0] << " " << ans[1];
	}
	return 0;


}