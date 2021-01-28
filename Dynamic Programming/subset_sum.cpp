/*Check if there exists a subset in array with given sum. Function return True/False*/

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

int main()
{
	int arr[] = {5, 8, 9, 2}, sum = 12, n = 4;
	cout<<"\nResult = "<<subset_sum(arr, sum, n)<<endl;//op:0
	return 0;
}
