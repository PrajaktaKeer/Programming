#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np, t;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	t = min((k * l) / nl, c * d);
	cout<<min(t, p / np)/ n<<endl;
	return 0;
}