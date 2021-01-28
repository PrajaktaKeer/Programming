#include<bits/stdc++.h>
using namespace std;

int main() {
	int m1, m2, m3, y1, y2, y3, t, count;;
	cin>>t;
	while(t--) {
		cin>>y1>>m1>>y2>>m2;
		count = 0;
		m3 = m1 + m2;
		if(m3 > 12) {
			while(m3 > 12) {
				count++;
				m3 -= 12;
			}
		}
		y3 = y1 + y2 + count;
		cout<<y3<<" "<<m3<<endl;
	}
	return 0;
}