#include<bits/stdc++.h>
using namespace std;
     
int main() { 
    int n, x, y, z, t;
    vector<int>v;
    cin>>t;

    while(t--) {
        cin>>n>>x>>y;
        v.clear();
        while(n--) {
            cin>>z;
            v.push_back(z);
        }
        if(v[0] == x && v[v.size() - 1] == y)
            cout<<"BOTH"<<endl;
        else if(v[0] == x && v[v.size() - 1] != y)
            cout<<"EASY"<<endl;
        else if(v[0] != x && v[v.size() - 1] == y)
            cout<<"HARD"<<endl;
        else
            cout<<"OKAY"<<endl;
        
    }
  
    return 0;
}