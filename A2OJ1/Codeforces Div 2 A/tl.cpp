#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m, x, r1, r2, r3;
	vector<int>correct, wrong;
	cin>>n>>m;
	while(n--) {
		cin>>x;
		correct.push_back(x);
	}
	while(m--) {
		cin>>x;
		wrong.push_back(x);
	}
	r1 = *max_element(correct.begin(), correct.end());
	r2 = *min_element(correct.begin(), correct.end());
	r3 = *min_element(wrong.begin(), wrong.end());
	if(max(r1, 2*r2) < r3)
		cout<<max(r1, 2*r2)<<endl;
	else
		cout<<-1<<endl;
	//cout<<max(r2*2, min(r1, r3))<<endl;
}