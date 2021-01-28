#include<bits/stdc++.h>

using namespace std;

//recursive solution
/*int pieces(int n, int a, int b, int c) {
    if(n == 0)
        return 0;
    if(n < 0)
        return INT_MIN;
    return 1 + max(pieces(n-a, a, b, c), max(pieces(n-b, a, b, c), pieces(n-c, a, b, c)));
}*/

//dynamic programming solution
int pieces(int n, int a, int b, int c) {
    int dp[n+1], r1 = INT_MIN, r2 = INT_MIN, r3 = INT_MIN;
    dp[0] = 0;
    memset(dp, 0, sizeof(dp));
    for(int i = 1; i <= n; i++) {
        if(i >= a)
            r1 = dp[i-a];
        if(i >= b)
            r2 = dp[i-b];
        if(i >= c)
            r3 = dp[i-c];
        dp[i] = 1 + max(r1, max(r2, r3));
    }
    return dp[n];
}

int main(){
    int n, a, b, c, x, y, mx = 0, temp;
    cin>>n>>a>>b>>c;
    cout<<pieces(n, a, b, c)<<endl;
    return 0;
}