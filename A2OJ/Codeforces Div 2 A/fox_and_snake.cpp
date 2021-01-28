#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, i, j, flag = 1;
	cin>>n>>m;
	char a[n+1][m+1];
	memset(a, '.', sizeof(a));
	for(i = 1; i <= n; i++) {
		if(i % 2 != 0) {
			for(j = 1; j <= m; j++) 
				a[i][j] = '#';
		}
		else {
			if(flag == 1) {
				a[i][m] = '#';
				flag = 0;
			}
			else if(flag == 0) {
				a[i][1] = '#';
				flag = 1;
			}
		}
	}
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= m; j++)
			cout<<a[i][j];
		cout<<endl;
	}
	return 0;
}