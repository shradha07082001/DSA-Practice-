#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,d;
	cin>>n>>d;
	int i,a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	int count=0;
	for(i=0;i<n-1;i++)
	{
	    if(a[i+1]-a[i]<=d)
	    {
	    count++;
	    i++;
	    }
	}
	cout<<count;
	return 0;
}
