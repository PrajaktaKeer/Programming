#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, j, a[1000][1000], count = 0, t;
    vector<int>v;
    cin>>t;
    while(t--) {
        cin>>n>>m;
        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) 
                cin>>a[i][j];
        }
        count = 0;
        v.clear();
        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                if(a[i][j] == -1)
                    continue;
                else {
                    if(i == 0 && j == 0 && find(v.begin(), v.end(), a[i][j]) == v.end()) {
                        if(a[i][j] == a[i][j+1] || a[i][j] == a[i+1][j] || a[i][j] == a[i+1][j+1]) {
                            count++;
                            v.push_back(a[i][j]);
                            continue;
                        }
                    }
                    
                    if(j != 0 && i == 0 && i != n-1 && j != m-1 && find(v.begin(), v.end(), a[i][j]) == v.end()) {
                        if(a[i][j] == a[i][j-1] || a[i][j] == a[i][j+1] || a[i][j] == a[i+1][j-1] || a[i][j] == a[i+1][j+1] || a[i][j] == a[i+1][j]){
                            count++;
                            v.push_back(a[i][j]);
                            continue;
                        }
                    }
                    
                    if(i == 0 && j == m - 1 && find(v.begin(), v.end(), a[i][j]) == v.end()) {
                        if(a[i][j] == a[i][j-1] || a[i][j] == a[i+1][j] || a[i][j] == a[i+1][j-1]){
                            count++;
                            v.push_back(a[i][j]);
                            continue;
                        }
                    }
                    
                    if(j == 0 && i != 0 && i != n-1 && j != m-1 && find(v.begin(), v.end(), a[i][j]) == v.end()) {
                        if(a[i][j] == a[i-1][j] || a[i][j] == a[i-1][j+1] || a[i][j] == a[i][j+1] || a[i][j] == a[i+1][j+1] || a[i][j] == a[i+1][j]) {
                            count++;
                            v.push_back(a[i][j]);
                            continue;
                        }
                    }
                    
                    if (i != 0 && j != 0 && i != n - 1 && j != m-1 && find(v.begin(), v.end(), a[i][j]) == v.end()){
                        if(a[i][j] == a[i - 1][j-1] || a[i][j] == a[i-1][j] || a[i][j] == a[i-1][j+1] || a[i][j] == a[i][j-1] || a[i][j] == a[i][j+1] || a[i][j] == a[i+1][j+1] || a[i][j] == a[i+1][j-1] || a[i][j] == a[i+1][j]){
                            count++;
                            v.push_back(a[i][j]);
                            continue;
                        }
                    }
                    
                    if(j == m - 1 && i != 0 && j != 0 && i !=n-1 && find(v.begin(), v.end(), a[i][j]) == v.end()) {
                        if(a[i][j] == a[i-1][j] || a[i][j] == a[i-1][j-1] || a[i][j] == a[i][j-1] || a[i][j] == a[i+1][j-1] || a[i][j] == a[i+1][j]){
                            count++;
                            v.push_back(a[i][j]);
                            continue;
                        }
                    }
                    
                    if(i == n - 1 && j == 0 && find(v.begin(), v.end(), a[i][j]) == v.end()) {
                        if(a[i][j] == a[i-1][j] || a[i][j] == a[i-1][j+1] || a[i][j] == a[i][j+1]){
                            count++;
                            v.push_back(a[i][j]);
                            continue;
                        }
                    }
                    
                    if(j != 0 && i != 0 && i == n - 1 && j != m-1 && find(v.begin(), v.end(), a[i][j]) == v.end()) {
                        if(a[i][j] == a[i][j - 1] || a[i][j] == a[i][j+1] || a[i][j] == a[i-1][j+1] || a[i][j] == a[i-1][j-1] || a[i][j] == a[i-1][j]){
                            count++;
                            v.push_back(a[i][j]);
                            continue;
                        }
                    }
                    
                    if(i == n - 1 && j == m - 1 && find(v.begin(), v.end(), a[i][j]) == v.end()) {
                        if(a[i][j] == a[i][j-1] || a[i][j] == a[i-1][j] || a[i][j] == a[i-1][j-1]){
                            count++;
                            v.push_back(a[i][j]);
                            continue;
                        }
                    }    
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}