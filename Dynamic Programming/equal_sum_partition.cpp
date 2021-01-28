/*Divide the array in 2 subsets and Check if the two subsets have equal sum. Function return True/False*/

#include<bits/stdc++.h>
using namespace std;

bool subset_sum(int arr[], int sum, int n) {
	int i, j, t[n+1][sum+1];
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
	return t[n][sum];
}

bool equal_sum(int arr[], int n) {
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += arr[i];
	if(sum % 2 != 0)
		return false;
	return subset_sum(arr, sum / 2, n);
}

int main()
{
	int arr[] = {5, 8, 6, 2}, n = 4;
	cout<<"\nResult = "<<equal_sum(arr, n)<<endl;//op:0
	return 0;
}
