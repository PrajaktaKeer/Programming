#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, x, chest = 0, biceps = 0, back = 0, i;
	cin>>n;
	for(i = 1; i <= n; i++) {
		cin>>x;
		if(i % 3 == 1)
			chest += x;
		else if(i % 3 == 2)
			biceps += x;
		else
			back += x;
	}
	if(chest > biceps && chest > back)
		cout<<"chest";
	else if(biceps > back)
		cout<<"biceps";
	else
		cout<<"back";
	return 0;
}