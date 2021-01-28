/* Problem Statement:
Given the number P, prints the first Prime number that is palindrome greater than or equal to P

Input Format:
Positive integer number P
We guarantee P will fit in Long Long integer

Output Format:
The first Prime number that is palindrome greater than or equal to P

Sample Input:
68

Sample Output:
101
*/


#include<bits/stdc++.h>
using namespace std;

int isprime(int n) {
	if(n == 1)
		return 0;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int ispalindrome(int n) {
	int x = n, y, rev = 0;
	while(x > 0) {
		y = x % 10;
		rev = (rev * 10) + y;
		x /= 10;
	}
	if(n == rev)
		return 1;
	else
		return 0;
}

int main() {
	int n;
	long long p;
	cin>>n;
	for(p = n; p < INT_MAX - 1; p++) {
		if(isprime(p) && ispalindrome(p)){
			cout<<p;
			break;
		}
	}
	//cout<<isprime(n)<<endl;
	//acout<<ispalindrome(n);
	return 0;
}