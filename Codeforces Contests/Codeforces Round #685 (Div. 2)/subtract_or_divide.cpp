#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		cin>>n;
		if(n == 1)
			cout<<0<<"\n";
		else if(n == 2)
			cout<<1<<"\n";
		else if(n == 3 || n % 2 == 0)
			cout<<2<<"\n";
		else
			cout<<3<<"\n";
	}
	return 0;
}