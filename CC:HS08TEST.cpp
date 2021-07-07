#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	float y;
	cin>>x>>y;
	if(x>y-0.50 or x%5!=0)
	cout<<fixed<<setprecision(2)<<y;

	else if(x<=y-0.50 and x%5==0)
	{
	float ans;
	ans= y-x-0.50;
	cout<<fixed<<setprecision(2)<<ans;
	}
	
	return 0;
}
