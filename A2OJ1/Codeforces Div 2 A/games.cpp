#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, a[100][2], i, j, count = 0;
	cin>>n;
	for(i = 0; i < n; i++) {
		for(j = 0; j < 2; j++)
			cin>>a[i][j];
	}
	for(i = 0; i < n ; i++) {
		for(j = 0; j < n; j++) {
			if(i != j) {
				if(a[i][1] == a[j][0])
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}