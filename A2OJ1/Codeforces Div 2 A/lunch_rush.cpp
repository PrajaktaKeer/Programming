#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, f, t, max = 0, mx = -INT_MAX;
	cin>>n>>k;
	while(n--) {
		cin>>f>>t;
		if(t <= k) 
			max = f;
		else
			max = f - t + k;
		if(max > mx)
			mx = max;
	}
	cout<<mx<<endl;
	return 0;
}