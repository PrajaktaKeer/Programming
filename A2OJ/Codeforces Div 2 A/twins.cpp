#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, i, noc = 0, sum, cs = 0;
	vector<int>v;
	cin>>n;
	for(i = 0; i < n; i++){
		cin>>x;
		v.push_back(x);
	}
	sum = accumulate(v.begin(), v.end(), 0);
	sort(v.begin(), v.end(), greater<int>());
	for(i = 0; i < v.size(); i++){
		cs += v[i];
		noc++;
		if(cs > sum / 2)
			break;
	}
	cout<<noc;
	return 0;
}