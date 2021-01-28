#include<bits/stdc++.h>
using namespace std;

int main() {
	long long t, n, temp;
	float c, x, sum;
	vector<long long>v;
	cin>>t;
	while(t--) {
		sum = 0;
		cin>>n>>x;
		v.clear();
		while(n--) {
			cin>>c;
			sum += c;
			temp = ceil(c / x);
			v.push_back(temp);
		}
		temp = ceil(sum / x);
		cout<<temp<<" "<<accumulate(v.begin(), v.end(), 0)<<endl;
	}
}