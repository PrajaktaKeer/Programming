#include<bits/stdc++.h>
using namespace std;

int main() {
	long long t, n, i, n20, n21, r;
	cin>>t;
	while(t--) {
		n20 = 0, n21 = 0;
		cin>>n;
		if(n < 2020)
			cout<<"NO"<<endl;
		else if(n % 2020 == 0 || n % 2021 == 0)
			cout<<"YES"<<endl;
		else {
			while(n >= 2021) {
				if(n - 2020 >= 2021)
					n -= 2020;
			}
			if(n % 2021 == 0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		
	}
}