#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sortbysec(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}

int main() 
{
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		int c,r;
		cin>>c>>r;
		v.push_back(make_pair(c-r,c+r));
	}
	sort(v.begin(),v.end(),sortbysec);
	int ans=1;
	int fin = v[0].second;
	for(int i=1;i<n;i++)
	{
		if(v[i].first>=fin)
		{
			fin = v[i].second;
			ans++;
		}
	}
	cout<<n-ans<<endl;
	return 0;
}
