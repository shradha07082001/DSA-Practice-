#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int n,k;
	cin>>n>>k;
	int wt[n];
	for(int i=0;i<n;i++)
	cin>>wt[i];
	int val[n];
	for(int i=0;i<n;i++)
	cin>>val[i];
	int dp[n+1][k+1];
	for(int i=0;i<=n;i++)
	dp[i][0]=0;
	for(int i=0;i<=k;i++)
	dp[0][i]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			if(wt[i-1]<=j)
			dp[i][j]= max(val[i-1]+dp[i][j-wt[i-1]], dp[i-1][j]);
			else 
			dp[i][j] = dp[i-1][j];
		}
	}
	cout<<dp[n][k];
	return 0;
}
