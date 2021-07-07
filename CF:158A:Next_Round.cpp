#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int t = a[k-1];
 
    int cnt = 0;
    for(int i =0;i<n;i++)
    {
        if(t==0)
        {
            if(a[i]>t)
            cnt++;
            
            else if(a[i]==0)
            break;
        }
        
        else
        {
            if(a[i]>=t)
            cnt++;
            
            else if(a[i]<t)
            break;
        }
    }
    cout<<cnt;
}
