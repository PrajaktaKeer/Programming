/* Given an array, divide the array into two subsets such that difference of sum of two subsets is minimum*/

#include<bits/stdc++.h>
using namespace std;

int min_subset_sum(int arr[], int sum, int n) {
	int i, j, t[n+1][sum+1];
	vector<int>v;
	for(j = 0; j < sum + 1; j++)
		t[0][j] = false;
	for(i = 0; i < n + 1; i++)
		t[i][0] = true;
	for(i = 1; i < n + 1; i++) {
		for(j = 1; j < sum + 1; j++) {
			if(arr[i - 1] <= j)
				t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
			else
				t[i][j] = t[i-1][j];
		}
	}
	for(i = 0; i <= sum / 2; i++) {
		if(t[n][i] == true)
			v.push_back(i);
	}
	int mn = INT_MAX;
	for(i = 0; i < v.size(); i++)
		mn = min(mn, sum - 2 * v[i]);
	return mn;
}

int main()
{
	int arr[] = {5, 8, 6, 2}, n = 4, sum = 0;
	for(int k = 0; k < n; k++)
		sum += arr[k];
	cout<<"\nResult = "<<min_subset_sum(arr, sum, n)<<endl;//op:0
	return 0;
}
