#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, d, x, sum = 0, temp;
	cin>>n>>d;
	for(int i = 0; i < n; i++) {
		cin>>x;
		sum += x;
	}
	temp = sum;
	sum = sum + ((n - 1) * 10);
	//cout<<sum<<" "<<d<<" ";
	if(sum > d)
		cout<<-1;
	else
		cout<<(d - temp) / 5;
	return 0;
}