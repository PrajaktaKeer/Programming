#include<bits/stdc++.h>
using namespace std;

int main() {
	int x, n;
	vector<int>v;
	cin>>n;
	while(n--) {
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	cout<<v[0]<<" "<<v[1];
}