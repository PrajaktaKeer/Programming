#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, mn;
	cin>>n>>m;
	if(n < m || n == m)
		mn = n;
	else
		mn = m;
	if(mn % 2 == 0)
		cout<<"Malvika";
	else
		cout<<"Akshat";
	return 0;
}