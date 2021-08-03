class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int a[n];
        int csum=0;
        int msum=INT_MIN;
        for(int i=0; i<n; i++)
        {
            csum+=nums[i];
            if(msum<csum)
                msum= csum;
            if(csum>=0)
                a[i]=csum;
            else
            {
                csum=0;
                a[i]=0;
            }
        }
        return msum;
    }
};
