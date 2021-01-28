#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2, s3;
	cin>>s1>>s2>>s3;
	s1 += s2;
	if(s3.find(s1) != string::npos)
		cout<<"Invited";
	else
		cout<<"I don't have time for parties, I have thigs to do.";
	return 0;
}