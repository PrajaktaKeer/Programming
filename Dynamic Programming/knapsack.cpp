/* Given weight and value array and weight of knapsack, compute the max profit that can be obtained*/

#include<bits/stdc++.h>
using namespace std;

int knapsack(int wt[], int val[], int n, int w) {
	int i, j, t[n + 1][w + 1];
	memset(t, 0, sizeof(t));
	for(i = 0; i < n+1; i++){
		for(j = 0; j < w + 1; j++) {
			if(i == 0 || j == 0)
				t[i][j] = 0;
		}
	}
	
	for(i = 1; i < n+1; i++){
		for(j = 1; j < w + 1; j++) {
			if(wt[i - 1] <= j)
				t[i][j] = max(val[i-1] + t[i - 1][j - wt[i - 1]], t[i-1][j]);
			else
				t[i][j] = t[i-1][j];
		}
	}
	return t[n][w];
}

int main() {
	int wt[] = {5, 8, 9, 2}, val[] = {3, 10, 5, 9}, w = 12, n = 4;
	cout<<"\nMax profit = "<<knapsack(wt, val, n, w)<<endl;//op:19
	return 0;
}
