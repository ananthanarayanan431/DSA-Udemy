#include <bits/stdc++.h>
#define pd push_back
#define FOR(n) for (int i=0; i<n; ++i)
#define endl "\n"

using namespace std;

int main() {
	string name="We are learing about STL Strings.STL string class is quite powerful. So we are Learning STL now";

	string word;
	getline(cin,word);

	int index=name.find(word);
	if (index!=-1) {
		cout << "First Occurence " << index << endl;
	}

	index = name.find(word,index+1);
	if (index!=-1) {
		cout << "Second Occurence " << index << endl;
	}

	cout << "ALL the Occurence of a word";
	cout << endl;

	int val=name.find(word);
	int k = 1;
	while (val<name.size()) {
		if (val!=-1){
			cout << k << " Occurrence " << val << endl;
			k++;
		}
		val=name.find(word,val+1);
	}
}