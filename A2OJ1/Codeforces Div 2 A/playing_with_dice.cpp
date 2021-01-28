#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, win1 = 0, win2 = 0, draw = 0;
	cin>>a>>b;
	for(int i = 1; i <= 6; i++) {
		if(abs(a - i) < abs(b - i))
			win1++;
		else if(abs(a - i) > abs(b - i))
			win2++;
		else
			draw++;
	}
	cout<<win1<<" "<<draw<<" "<<win2<<endl;
	return 0;
}
