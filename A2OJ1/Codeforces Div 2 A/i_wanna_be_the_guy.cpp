#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, p, q, x, j;
	set<int>s;
	cin>>n;
	cin>>p;
	while(p--) {
		cin>>x;
		s.insert(x);
	}
	cin>>q;
	while(q--) {
		cin>>x;
		s.insert(x);
	}
	if(s.size() < n)
		cout<<"Oh, my keyboard!";
	else
		cout<<"I become the guy.";
	return 0;
}