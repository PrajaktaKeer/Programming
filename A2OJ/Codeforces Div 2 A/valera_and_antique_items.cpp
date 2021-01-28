#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, v, k, p, x;
	set<int>a;
	cin>>n>>v;
	for(int i = 1; i <= n; i++) {
		cin>>k;
		while(k--) {
			cin>>x;
			if(x < v) {
				a.insert(i);
			}
		}
	}
	cout<<a.size()<<endl;
	for(auto i = a.begin(); i != a.end(); i++) 
		cout<<*i<<" ";
	return 0;
}