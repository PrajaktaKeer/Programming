#include<bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int n, l, i = -1;
	cin>>n>>l;
	while (l % n == 0)
    {
        l /= n;
        i++;
    }
    if(l == 1 and i >= 0)
		cout<<"YES\n"<<i<<endl;
	else
		cout<<"NO"<<endl;
}