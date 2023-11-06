#include <bits/stdc++.h>
#define pd push_back
#define loop(n) for (int i=0; i<n; ++i)
#define endl "\n"

using namespace std;


vector<int> brute_sum(vector<int> arr,int target) {
	vector<int> ans;
	for (int i=0; i<arr.size(); ++i) {
		for (int j=i+1; j<arr.size(); ++j) {
			if (arr[i]+arr[j]==target) {
				ans.pd(arr[i]);
				ans.pd(arr[j]);
				return ans;
			}
		}
	}
	return {-1,-1};
}


vector<int> brurte_index(vector<int> arr,int target) {
	for (int i=0; i<arr.size(); ++i) {
		for (int j=i+1; j<arr.size(); ++j) {
			if (arr[i]+arr[j]==target) {
				return {i,j};
			}
		}
	}
	return {-1,-1};
}

vector<int> optimal_sum(vector<int> arr,int target) {
	vector<int> ans;
	sort(arr.begin(),arr.end());
	int left = 0;
	int right = arr.size() - 1;
	while (left<right) {
		int sum=arr[left]+arr[right];
		if (sum==target) {
			return {arr[left],arr[right]};
		}
		else if (sum>target) right--;
		else left++;
	}
	return {-1,-1};
}

vector<int> better_sum(vector<int> arr,int target) {
	vector<int> ans;
	unordered_set<int> s;

	for (int i=0; i<arr.size(); ++i) {
		int x = target-arr[i];
		if (s.find(x)!=s.end()) {
			ans.pd(x);
			ans.pd(arr[i]);
			return ans;
		}
		s.insert(arr[i]);
	}
	return {-1,-1};
}

vector<int> better_index(vector<int> arr,int target) {
	map<int,int> ans;

	for (int i=0; i<arr.size(); ++i) {
		int x = target - arr[i];
		if (ans.find(x)!=ans.end()) {
			return {ans[x],i};
		}
		ans[arr[i]]=i;
	}
	return {-1,-1};
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> arr = {2,5,6,8,11};
	int target = 14;

	// two -> Integer representing the sum
	// two -> Index of that particular integer

	auto ans1 = brute_sum(arr,target);
	auto ans2 = better_sum(arr,target);
	auto ans3 = optimal_sum(arr,target);

	loop(ans1.size()) {
		cout << ans1.at(i) << " ";
	}
	cout << endl;
	loop(ans2.size()) {
		cout << ans2.at(i) << " ";
	}
	cout << endl;
	loop(ans3.size()) {
		cout << ans3.at(i) << " ";
	}
	cout << endl;
	cout << "Two Sum -> Index" << endl;

	auto index1 = brurte_index(arr,target);
	auto index2 = better_index(arr,target);

	loop(index1.size()) {
		cout << index1.at(i) << " ";
	}
	cout << endl;
	loop(index2.size()) {
		cout << index2.at(i) << " ";
	}
	return 0;
}