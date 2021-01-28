/* Assign sign(+, -) to each element of array so that its sum is as given in the problem(s)*/

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
	for(i = 1; i < n+1; i++){
		for(j = 1; j < sum + 1; j++) {
			if(arr[i - 1] <= j)
				t[i][j] = t[i - 1][j - arr[i - 1]] + t[i-1][j];
			else
				t[i][j] = t[i-1][j];
		}
	}
	return t[n][sum];
}

int main()
{
	int arr[] = {1, 2, 1, 3}, n = 4, s = 1, sum = 0;
	for(int k = 0; k < n; k++)
		sum += arr[k];
	cout<<"\nResult = "<<subset(arr, (s + sum) / 2, n)<<endl;//op:3
	return 0;
}
