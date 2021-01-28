#include<bits/stdc++.h>
using namespace std;

int main() {
	int x;
	vector<int>v, temp;
	vector<int>::iterator ip;
	while(1){
		cin>>x;
		if(x == 0)
			break;
		v.push_back(x);
	}
	temp = v;
	sort(v.begin(), v.end());
	ip = unique(v.begin(), v.end());
	v.resize(distance(v.begin(), ip));
	for(int i = 0; i < v.size(); i++) {
		cout<<v[i]<<" "<<count(temp.begin(), temp.end(), v[i])<<endl;
	}
	return 0;
}