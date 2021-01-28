#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, x, teams = 0;
	cin>>n>>k;
	while(n--) {
		cin>>x;
		if(x + k <= 5)
			teams++;
	}
	cout<<teams / 3;
	return 0;
}