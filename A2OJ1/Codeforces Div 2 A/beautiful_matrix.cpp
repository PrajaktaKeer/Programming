#include<bits/stdc++.h>
using namespace std;

int main() {
	int a[6][6], i, j, steps = 0, r, c;
	for(i = 1; i <=5; i++) {
		for(j = 1; j <= 5; j++) {
			cin>>a[i][j];
			if(a[i][j] == 1) {
				r = i;
				c = j;
			}
		}
	}
	cout<<abs(3 - r) + abs(3 - c);
	return 0;
}