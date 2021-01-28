#include<bits/stdc++.h>
using namespace std;

int isPrime(int n) {
	for(int i = 2; i < sqrt(n); i++) {
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	long long t, n, i;
	cin>>t;
	while(t--) {
		cin>>n;
		if(n % 2 == 0 || !isPrime(n))
			cout<<"NO"<<endl;
		else {
			cout<<"YES"<<endl;
		}
		
	}
}