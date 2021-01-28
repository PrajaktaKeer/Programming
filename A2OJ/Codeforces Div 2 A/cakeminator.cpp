#include<bits/stdc++.h>
using namespace std;

int main() {
	int r, c, i, j, pieces = 0;
	char a[20][20];
	cin>>r>>c;
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++)
			cin>>a[i][j];
	}
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			if(a[i][j] == 'S')
				break;
		}
		if(j < c)
			continue;
		else {
			pieces += c;
			for(j = 0; j < c; j++)
				a[i][j] = 'e';
		}
	}

	for(j = 0; j < c; j++) {
		for(i = 0; i < r; i++) {
			if(a[i][j] == 'S')
				break;
		}
		if(i < r)
			continue;
		else {
			for(i = 0; i < r; i++) {
				if(a[i][j] != 'e') {
					pieces++;
					a[i][j] = 'e';
				}
			}
		}
	}

	cout<<pieces<<endl;
}