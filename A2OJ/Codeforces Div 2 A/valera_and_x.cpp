#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	char x;
	set<char>s1, s2;
	cin>>n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin>>x;
			if(i == j || j == n - i + 1)
				s1.insert(x);
			else
				s2.insert(x);
		}
	}
	if(s1.size() == 1 && s2.size() == 1 && s1 != s2)
		cout<<"YES";
	else
		cout<<"NO";
}