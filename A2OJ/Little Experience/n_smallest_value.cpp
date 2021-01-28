#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, i, x;
    vector<int>v;
    cin>>t;
    while(t--) {
        v.clear();
        for(i = 0; i < 10; i++) {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout<<v[1]<<endl;
    }

    return 0;
}