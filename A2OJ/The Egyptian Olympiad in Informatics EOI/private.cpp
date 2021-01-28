#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, sum1, sum2, i, j;
	string s, temp;
	cin>>n;
	while(n--) {
		sum1 = 0, sum2 = 0;
		cin>>s;
		temp = s;
		transform(s.begin(), s.end(), s.begin(), ::toupper);
		for(i = 0; i < s.length(); i++){
			if(s[i] == '.')
				break;
			sum1 += s[i] - 64;
		}
		for(j = i + 1; j < s.length(); j++)
			sum2 += s[j] - 64;
		cout<<sum1<<" "<<sum2;
		if(sum1 != sum2)
			cout<<temp<<endl;
	}
}