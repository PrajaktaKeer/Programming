#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, i, a, b, flag = 0;
	cin>>n;
	for(i = 0; i < n; i++) {
		cin>>a>>b;
		if(a != b) {
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		cout<<"Happy Alex"<<endl;
	else
		cout<<"Poor Alex"<<endl; 
	return 0;
}