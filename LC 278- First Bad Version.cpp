// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        long long int start=1;
        long long int end=n;
        long long int middle = (start+end)/2;
        long long int version;
        while(start<=end)
        {
            if(isBadVersion(middle))
            {
                version = middle;
                end = middle-1;
            }
            else
            {
                start = middle+1;
            }
            
            middle = (start+end)/2;
            
        }
        
        return version;
        
    }
};
