#include<bits/stdc++.h>
using namespace std;

class person {
	string fname, lname;
	double amount;
public:
	void get() {
		cin>>fname>>lname>>amount;
	}
	void display() {
		cout<<fname<<" "<<lname<<" "<<amount;
	}
	int check(string a, string b) {
		if(fname == a && lname == b)
			return 1;
		return 0;
	}
	double bank_earnings(double a) {
		int ta1 = amount, ta2 = a, cents = 0, x = a * 100, y, tmp = 1;
		for(int i = 1; i <= 2; i++) {
			y = x % 10;
			cents += tmp * y;
			tmp *= 10;
			x /= 10;
		}
		amount -= a + (cents * 0.01);
		return (cents * (ta2 / ta1));  
	}
};

int main() {
	string fname, lname;
	double amount, ba = 0;
	int n, i, t, j;
	person p[10000];
	cin>>n;
	for(i = 0; i < n; i++)
		p[i].get();
	cin>>t;
	for(i = 0; i < t; i++) {
		cin>>fname>>lname>>amount;
		for(j = 0; j < n; j++) {
			if(p[j].check(fname, lname))
				ba += p[j].bank_earnings(amount);
		}
	}
	for(i = 0; i < n; i++)
		p[i].display();
}