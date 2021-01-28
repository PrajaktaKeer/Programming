#include<bits/stdc++.h>
using namespace std;

int main() {
	int x = 0, y = 0, j, tmp, i;
	string s;
	cin>>s;
	
	for(i = 0; i < s.length(); i++) {
		if(s[i] == ',')
			break;
	}
	
	tmp = 1;
	for(j = i - 1; j >= 0; j--){
		x = x + (tmp * (s[j] - 48));
		tmp *= 10;
	}
	tmp = 1;
	for(j = s.length() - 1; j > i; j--){
		y += tmp * (s[j] - 48);
		tmp *= 10;
	}
	//cout<<x<<" "<<y;
	cout<<x-y;
	return 0;
}