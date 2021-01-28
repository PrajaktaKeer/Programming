#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, steps = 0, mx, mn, i, j;
	vector<int>v;
	cin>>n;
	while(n--) {
		cin>>x;
		v.push_back(x);
	}
	mx = *max_element(v.begin(), v.end());
	mn = *min_element(v.begin(), v.end());

	for(i = 0; i < v.size(); i++) {
		if(v[i] == mx)
			break;
	}
	for(j = v.size() - 1; j >= 0; j--) {
		if(v[j] == mn)
			break;
	}
	n = v.size() - 1;
	if(i > j)
		cout<<i + abs(n - j) - 1;
	else
		cout<<i + abs(n - j);
	return 0;
}