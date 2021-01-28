#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n, s, i, sum = 0, x;
	cin>>n>>s;
	for(i = 0; i < n; i++){
		cin>>x;
		sum += x;
	}
	if(sum <= s)
		cout<<"Yes";
	else
		cout<<"No";
	return 0;
}