#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, i, j, mx1 = 0, mx2= 0, mn = 999;
	vector<int>v;
	cin>>n;
	while(n--) {
		cin>>x;
		v.push_back(x);
	}
	for(i = 0; i < v.size() - 1; i++) {
		if(v[i + 1] - v[i] > mx1)
			mx1 = v[i + 1] - v[i];
	}
	for(i = 1; i < v.size() - 1; i++) {
		mx2 = max(mx1, v[i + 1] - v[i - 1]);
		if(mx2 < mn)
			mn = mx2;
	}
	cout<<mn;
	return 0;
}