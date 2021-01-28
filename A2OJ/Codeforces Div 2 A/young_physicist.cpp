#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, a[101][3], i, j, sumx = 0, sumy = 0, sumz = 0;
	cin>>n;

	for(i = 0; i < n; i++) {
		for(j = 0; j < 3; j++) {
			cin>>a[i][j];
		}
	}

	for(j = 0; j < n; j++) {
		sumx += a[j][0];
		sumy += a[j][1];
		sumz += a[j][2];
	} 
	//cout<<sumx<<" "<<sumy<<" "<<sumz;
	if(sumx == 0 && sumy == 0 && sumz == 0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}