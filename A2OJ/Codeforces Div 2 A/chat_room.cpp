#include<bits/stdc++.h>
using namespace std;

int main() {
	string s, s1 = "hello";
	cin>>s;
	int i, j = 0, size = 0;
	for(i = 0; i < s.length(); i++) {
		if(s[i] == s1[j]){
			j++;
			size++;
		}
	}
	if(size == 5)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}