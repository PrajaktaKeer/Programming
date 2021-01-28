#include<bits/stdc++.h>
using namespace std;
     
int main() { 
    int t, i, c, m, loc;
    string s;
    vector<int>v;
    cin>>t;

    while(t--) {
        v.clear();
        cin>>s;
        sort(s.begin(), s.end());
        for(i = 0; i < s.length(); i++) {
            c = count(s.begin(), s.end(), s[i]);
            v.push_back(c);
        }
        m = *max_element(v.begin(), v.end());
        for(i = 0; i < v.size(); i++) {
            if(v[i] == m)
                break;
        }
            cout<<m<<" "<<s[i]<<endl;
    }
    return 0;
}