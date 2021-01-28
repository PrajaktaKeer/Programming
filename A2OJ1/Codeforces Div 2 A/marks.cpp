#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	char mx;
	cin>>n>>m;

	vector<string>v(n);
	vector<bool>successful(n, false);

	for(int i = 0; i < n; i++) 
		cin>>v[i];	
	
	for(int i = 0; i < m; i++) {
		mx = '0';
		for(int j = 0; j < n; j++) {
			if(v[j][i] > mx)
				mx = v[j][i];
		}
		//cout<<"*"<<mx<<"* ";
		for(int j = 0; j < n; j++) {
			if(v[j][i] == mx) {
				successful[j] = true;
				//break;
			}
		}
		/*for(int j = 0; j < n; j++)
			cout<<successful[j] <<" , ";
		cout<<endl;*/
	}
	cout<<count(successful.begin(), successful.end(), true)<<endl;
}