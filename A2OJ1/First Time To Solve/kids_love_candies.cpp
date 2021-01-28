#include<bits/stdc++.h>
using namespace std;
     
int main() { 
    int n, k, x, kids = 0, t;
    cin>>t;

    while(t--) {
        kids = 0;
        cin>>n>>k;
        while(n--){
            cin>>x;
            while(x != 0) {
             
                if( x< k)
                break;
                else{
                    x -= k;
                    kids++;
                }
            }
        }
        cout<<kids<<endl;
    }
  
    return 0;
}