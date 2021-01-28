/* In the array count the number of subsets whose sum is 'sum'*/

#include<bits/stdc++.h>
using namespace std;

int subset(int arr[], int sum, int n) {
	int i, j, t[n + 1][sum + 1];
	memset(t, 0, sizeof(t));
	for(i = 0; i < n+1; i++){
		for(j = 0; j < sum + 1; j++) {
			if(i == 0)
				t[i][j] = 0;
			if(j == 0)
				t[i][j] = 1;
		}
	}
	cout<<"\nT before\n";
	for(i = 0; i < n+1; i++){
		for(j = 0; j < sum + 1; j++) {
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i = 1; i < n+1; i++){
		for(j = 1; j < sum + 1; j++) {
			if(arr[i - 1] <= j)
				t[i][j] = t[i - 1][j - arr[i - 1]] + t[i-1][j];
			else
				t[i][j] = t[i-1][j];
		}
	}
	cout<<"\nT after\n";
	for(i = 0; i < n+1; i++){
		for(j = 0; j < sum + 1; j++) {
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
	return t[n][sum];
}

int main() {
	int arr[] = {1, 2, 3, 2, 4}, n = 5, sum = 4;
	cout<<"\nTotal number of subsets = "<<subset(arr, sum, n)<<endl;
	return 0;
}
