#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector< pair <int, int> > vect; 
		for(int i=0;i<n;i++)
		{
			int s,f;
			cin>>s>>f;
			vect.push_back(make_pair(s,f));
		}
		sort(vect.begin(), vect.end(), sortbysec); 
		int count=1;
		int i=0;
		for(int j=1;j<n;j++)
		{
			if(vect[i].second<=vect[j].first)
			{
				count++;
				i=j;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
