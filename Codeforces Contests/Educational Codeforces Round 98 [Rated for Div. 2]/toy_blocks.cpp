#include<bits/stdc++.h>
using namespace std;

int main() {
	long long sum;
	long long t, n, x;
	vector<int>v;
	cin>>t;
	while(t--) {
		cin>>n;
		v.clear();
		while(n--) {
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		sum = accumulate(v.begin(), v.end() - 1, 0);
		if(sum == 0)
			cout<<pow(v[v.size() - 1], count(v.begin(), v.end(), 0) - 1)<<endl;
		else
			cout<<sum % v[v.size() - 1]<<endl;
	}
	return 0;
}