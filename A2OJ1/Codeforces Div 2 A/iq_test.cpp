#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, eidx, oidx, even = 0, odd = 0;
	cin>>n;
	for(int i = 1; i <= n; i++) {
		cin>>x;
		if(x % 2 == 0) {
			even++;
			eidx = i;
		}
		if(x % 2 != 0) {
			odd++;
			oidx = i;
		}
	}
	if(even > odd)
		cout<<oidx;
	else
		cout<<eidx;
	return 0;
}
