#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	vector<int>even, odd, result;
	cin>>n;
	while(n--) {
		cin>>x;
		if(x % 2 == 0)
			even.push_back(x);
		else
			odd.push_back(x);
	}
	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end(), greater<int>());
	even.insert(even.end(), odd.begin(), odd.end());
	for(int i = 0; i < even.size(); i++)
		cout<<even[i]<<endl;
	return 0;
}