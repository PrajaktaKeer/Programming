#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, c, x, max = 0;
	vector<int>v;
	cin>>n>>c;
	while(n--) {
		cin>>x;
		v.push_back(x);
	}
	for(int i = 0; i < v.size() - 1; i++) {
		if(v[i] - v[i + 1] - c > max)
			max = v[i] - v[i + 1] - c;
	}
	cout<<max;
}