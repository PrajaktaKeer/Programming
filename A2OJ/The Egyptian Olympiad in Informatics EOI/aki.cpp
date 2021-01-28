#include<bits/stdc++.h>
using namespace std;

int main() {
	int i, j;
	string s;
	cin>>s;
	for(i = 0, j = s.length() - 1; i <= j; i++, j--) {
		if(tolower(s[i]) != tolower(s[j]))
			break;
	}
	if(i > j)
		cout<<"Palindrome";
	else
		cout<<"Not Palindrome";
}