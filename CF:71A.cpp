#include<bits/stdc++.h>
#include<string>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int l = s.length();
        if(l>10)
        {
            cout<<s[0]<<l-2<<s[l-1];
        }
        else cout<<s;
        cout<<endl;
        
    }
}
