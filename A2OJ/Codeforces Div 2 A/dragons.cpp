#include<bits/stdc++.h>
using namespace std;

int main() {
	int s, n, x, y, i;
	vector<pair<int, int>>v;
	cin>>s>>n;
	for(i = 0; i < n; i++) {
		cin>>x>>y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end());
	for(i = 0; i < n; i++) {
		if(s > v[i].first)
			s += v[i].second;
		else {
			cout<<"NO";
			break;
		}
	}
	if(i >= n)
		cout<<"YES";
}