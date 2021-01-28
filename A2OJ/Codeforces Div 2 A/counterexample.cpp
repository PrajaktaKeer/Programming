#include<bits/stdc++.h>
using namespace std;

int main() {
	long long l, r;
	cin>>l>>r;
	if((r == l + 1) || r == l)
		cout<<-1<<"\n";
	else if(l % 2 == 0)
		cout<<l<<" "<<l+1<<" "<<l+2<<"\n";
	else if((r - l + 1) > 3)
		cout<<l+1<<" "<<l+2<<" "<<l+3<<"\n";
	else
		cout<<-1<<"\n";
	return 0;
}
