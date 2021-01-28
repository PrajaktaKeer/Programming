#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, t, u, x;
	cin>>n;
	if(n > 0)
		cout<<n;
	else {
		x = n;
		u = x % 10;
		x /= 10;
		t = x % 10;
		x /= 10;
		//cout<<u<<" "<<t<<" ";
		if(abs(x * 10 + u) <= abs(x * 10 + t))
			cout<<(x * 10 + u);
		else
			cout<<(x * 10 + t);
	}
	return 0;
}