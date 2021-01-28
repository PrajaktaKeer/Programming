#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y, flag = 0, sumx = 0, sumy = 0;
    cin>>n;
    
    for(int i = 1; i <= n; i++) {
        cin >> x >> y;
        if(n == 1 && x % 2 + y % 2 == 1) {
            cout << -1 <<endl;
            return 0;
        }
        if(x % 2 + y % 2 == 1)
            flag = 1; //there is one pair which has one even and one odd
        sumx += x;
        sumy += y;
    }
    if(sumx % 2 == 0 && sumy % 2 == 0)
        cout << 0 <<endl;
    else if(sumx % 2 == 1 && sumy % 2 == 1 && flag)
        cout << 1 <<endl;
    else
        cout << -1 <<endl; 
}