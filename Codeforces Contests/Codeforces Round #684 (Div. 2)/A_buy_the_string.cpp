#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, c0, c1, h, t, x, y;
	string s;
	cin>>t;
	while(t--) {
		cin>>n>>c0>>c1>>h>>s;
		x = count(s.begin(), s.end(), '1');
		y = count(s.begin(), s.end(), '0');
		if(c0 == c1) {
			cout<<n * c0<<endl;
		}
		else if (c0 < c1) {
			cout<<min((n * c0) + (x * h), (c0 * y) + (c1 * x))<<endl;
		}
		else {
			cout<<min((n * c1) + (y * h), (c0 * y) + (c1 * x))<<endl;
		}
	}
	return 0;
}