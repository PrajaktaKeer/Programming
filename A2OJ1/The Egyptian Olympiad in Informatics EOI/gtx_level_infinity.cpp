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
	for(int i = 0; i < v.size(); i++)
	cout<<v[i]<<" ";
}