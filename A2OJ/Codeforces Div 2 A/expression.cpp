#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, res;
	vector<int>v;
	cin>>a>>b>>c;
	res = a + b + c;
	v.push_back(res);
	res = a * b * c;
	v.push_back(res);
	res = a * (b + c);
	v.push_back(res);
	res = (a + b) * c;
	v.push_back(res);

	cout<<*max_element(v.begin(), v.end());
	return 0;
}