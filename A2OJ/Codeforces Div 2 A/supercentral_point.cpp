#include<bits/stdc++.h>
using namespace std;

int main() {
	vector< pair <int,int> > v;
	int n, x, y, count = 0, i, j;
	cin>>n;
	while(n--) {
		cin>>x>>y;
		v.push_back( make_pair(x, y)); 
	}

	for(i = 0; i < v.size();i++){
		bool up = false, down = false, left = false, right = false;
        for(j = 0; j < v.size(); j++){
            if(v[i].first == v[j].first && v[i].second < v[j].second) 
            	up = true;
            else if(v[i].first == v[j].first && v[i].second > v[j].second) 
            	down = true;
            else if(v[i].first > v[j].first && v[i].second == v[j].second) 
            	left = true;
            else if(v[i].first < v[j].first && v[i].second == v[j].second) 
            	right = true;
        }
        if(down == true && up == true && right == true && left == true) 
            count++;
    }
	cout<<count<<endl;
}