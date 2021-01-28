#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, mx, sum;
	cin>>a>>b>>c;
	if(a > b && a > c) {
		mx = a;
		sum = b + c;
	}
	else if(b > c) {
		mx = b;
		sum = a + c;
	}
	else{
		mx = c;
		sum = b + a;
	}
	if(sum < mx)
		cout<<mx;
	else
		cout<<sum;
}