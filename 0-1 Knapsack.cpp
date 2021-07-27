#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001] ;

int knapsack(int wt[],int v[],int w,int n)
{

	if(n==0 || w==0)
	return 0;

	if(dp[n][w]!=-1)
	return dp[n][w];

	if(wt[n-1]<=w)
	{
		dp[n][w] = max(v[n-1]+knapsack(wt,v,w-wt[n-1],n-1) , knapsack(wt,v,w,n-1));
	}
	else 
	{
	dp[n][w] = knapsack(wt,v,w,n-1);
	}
	return dp[n][w];
}

int main() 
{
	memset(dp,-1,sizeof(dp));
	int n,w;
	cin>>n>>w;
	int wt[n],v[n];
	for(int i=0;i<n;i++)
	cin>>wt[i];
	for(int i=0;i<n;i++)
	cin>>v[i];
	int ans = knapsack(wt,v,w,n);
	cout<<ans;
	return 0;
}
