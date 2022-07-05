bool check(string haystack,int i,string needle)
{
    int j=0;
    while(haystack[i] == needle[j])
    {
        i++;
        j++;
        if(i==haystack.length() or j==needle.length())
            break;
    }
    if(j==needle.length())
        return true;
    else return false;
}

class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if(needle=="")
            return 0;
        
        for(int i=0;i<haystack.length();i++)
        {
            if(check(haystack,i,needle))
                return i;
        }
        
        return -1;
    }
};
