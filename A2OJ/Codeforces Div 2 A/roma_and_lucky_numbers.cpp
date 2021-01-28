#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, x, cnt = 0;
	string s;
	cin>>n>>k;
	while(n--) {
		cin>>x;
		s =  to_string(x);
		if((count(s.begin(), s.end(), '4') + count(s.begin(), s.end(), '7')) <= k)
			cnt++; 
	}
	cout<<cnt<<endl;
}