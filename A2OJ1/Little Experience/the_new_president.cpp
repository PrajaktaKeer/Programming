#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, mat[100][100], votes[10000], c, v, i, j, mx, ind1, ind2, v1, v2, tmp;
	cin>>t;
	while(t--) {
		cin>>c>>v;
		for(i = 1; i <=c; i++) 
			votes[i] = 0;
		for(i = 0; i < v; i++) {
			for(j = 0; j < c; j++) {
				cin>>mat[i][j];
				if(!j)
					votes[mat[i][j]]++;
			}
		}
		mx = 0;
		for(i = 1; i <=c; i++) {
			if(votes[i] > mx) {
				mx = votes[i];
				ind1 = i;
			}
		}
		if(mx >= v / 2 + 1)
			cout<<ind1<<" "<<1<<endl;
		else{
			tmp = 0;
			for(i = 1; i <= c; i++) {
				if(i != ind1 && votes[i] <= mx && votes[i] > tmp) {
					tmp = votes[i];
					ind2 = i;
				}
			}
			v1 = 0, v2 = 0;
			for(i = 0; i < v; i++) {
				for(j = 0; j < c; j++) {
					if(mat[i][j] == ind1){
						v1++;
						break;
					}
					if(mat[i][j] == ind2) {
						v2++;
						break;
					}
				}
			}
			if(v1 > v2)
				cout<<ind1<<" "<<2<<endl;
			else
				cout<<ind2<<" "<<2<<endl;
		}
	}
}