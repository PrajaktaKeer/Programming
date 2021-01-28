#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x, c, i;
	long long sum;
	vector<int>v;
	cin>>t;
	while(t--) {
		cin>>n>>x;
		v.clear();
		sum = 0;
		while(n--) {
			cin>>c;
			v.push_back(c);
		}
		for (auto it = v.begin(); it != v.end(); ++it) {
			if(*it % x == 0) {
				v.insert(v.end(), x, *it / x);
				sum += v[i];
				v.erase(it);
			}
			else
				break;
		}
		cout<<endl;
		cout<<accumulate(v.begin(), v.end(), sum)<<endl;
	}
}