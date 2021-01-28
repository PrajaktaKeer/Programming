#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, mx;
	cin>>a>>b>>c;
	if(a > b && a > c)
		mx = a;
	else if(b > c)
		mx = b;
	else
		mx = c;
	cout<<mx;
}