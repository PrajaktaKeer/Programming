#include<bits/stdc++.h>
using namespace std;

class contact {
	string fname, lname, contact;
public:
	void get(){
		cin>>fname>>lname>>contact;
	}
	void update(string a, string b, string c){
			contact = c;
			fname = a;
			lname = b;
	}
	void display() {
		cout<<fname<<" "<<lname<<" "<<contact<<endl;
	}
	int check(string a, string b, string c) {
		string x = fname, y = lname, z = contact;
		transform(a.begin(), a.end(), a.begin(), ::tolower);
		transform(b.begin(), b.end(), b.begin(), ::tolower);
		transform(c.begin(), c.end(), c.begin(), ::tolower);
		transform(x.begin(), x.end(), x.begin(), ::tolower);
		transform(y.begin(), y.end(), y.begin(), ::tolower);
		transform(z.begin(), z.end(), z.begin(), ::tolower);
		if(a == x && b == y && c != contact)
			return 1;
		return 0;
	}
};

int main() {
	int n, u, i, j;
	contact cn[10000];
	string a, b, c;
	cin>>n;
	for(i = 0; i < n; i++)
		cn[i].get();
	cin>>u;
	for(i = 0; i < u; i++){
		cin>>a>>b>>c;
		for(j = 0; j < n; j++) {
			if(cn[j].check(a, b, c))
				cn[j].update(a,b,c);
		}
	}
	for(i = 0; i < n; i++)
		cn[i].display();
	return 0;
}