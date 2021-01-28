#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, f, x, i, ans;
	vector<int>v;
	cin>>n>>f;
	while(f--) {
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	ans = v[n - 1] - v[0];
	for(i = 1; i <= v.size() - n; i++) {
		if(v[i+n-1] - v[i] < ans)
			ans = v[i+n-1] - v[i];
	}
	
	cout<<ans;
	return 0;
}