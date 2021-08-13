class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size()==NULL)
            return 0;
        int k=1;
        int j=1;
        int n =nums.size();
        while(j<n)
        {
            if(nums[j]==nums[j-1])
                j++;
            else
            {
                nums[k]=nums[j];
                k++;
                j++;
            }
        }
        return k;
    }
};
