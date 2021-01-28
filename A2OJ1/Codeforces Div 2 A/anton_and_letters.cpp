#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	set<char>l;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++) {
		if(s[i] != '{' && s[i] != '}' && s[i] != ',' && s[i] != ' ')
			l.insert(s[i]);
	}
	//cout<<s.size()<<endl;
	/*for(auto i = l.begin(); i != l.end(); i++) 
		cout<<*i<<" ";*/
	cout<<l.size();
	return 0;
}