#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, c1 = 0, c2 = 0, c3 = 0, a1[10000], a2[10000], a3[10000], j = 0, k = 0, l = 0, x;
	cin>>n;
	for(int i = 1; i <= n; i++) {
		cin>>x;
		if(x == 1) {
			c1++;
			a1[j++] = i;
		}
		if(x == 2) {
			c2++;
			a2[k++] = i;
		}
		if(x == 3) {
			c3++;
			a3[l++] = i;
		}
	}
	if(c1 == 0 || c2 == 0 || c3 == 0) 
		cout<<0;
	else {
		if(c1 < c2 && c1 < c3) {
			cout<<c1<<endl;
			for(int i = 0; i < c1; i++)
				cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
			}
		else if(c2 < c3) {
			cout<<c2<<endl;
			for(int i = 0; i < c2; i++)
				cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
		}
		else {
			cout<<c3<<endl;
			for(int i = 0; i < c3; i++)
				cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
		}
	}
	
	return 0;
}