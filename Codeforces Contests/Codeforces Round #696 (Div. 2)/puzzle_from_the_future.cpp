#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, mx = -1, temp;
	string b, d, a, c, ans;
	cin>>t;
	while(t--) {
		cin>>n>>b;
		mx = -1;
		for(int i = 1; i <= pow(2, n); i++) {
			c = "";
			a = bitset<(int)pow(10, 5)>(i).to_string();
			a.erase(0,(int)pow(10, 5) - n);
			//cout<<a << " "<< b<< endl;
			
			for(int j = 0; j < n; j++) {
				if(a[j] == '0' && b[j] == '0')
					c += "0";
				else if(a[j] == '1' && b[j] == '0')
					c += "1";
				else if(a[j] == '0' && b[j] == '1')
					c += "1";
				else if(a[j] == '1' && b[j] == '1')
					c += "2";
			}
			//cout<<c<<endl;
			auto ip = unique(c.begin(), c.end());
			c.resize(distance(c.begin(), ip));
			temp = stoi(c);
			//cout<<a<<" "<<c<<endl;
			if(temp > mx) {
				mx = temp;
				ans = a;
			}

		}
		cout<<ans<<endl;
	}
}