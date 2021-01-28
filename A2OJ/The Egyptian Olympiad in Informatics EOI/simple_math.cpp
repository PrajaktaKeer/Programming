#include<bits/stdc++.h>
using namespace std;

int main() {
	float a, b, c;
	cin>>a>>b>>c;
	cout<<(-b + pow((pow(b, 2) - 4*a*c),0.5)) / (2*a);
	return 0;
}