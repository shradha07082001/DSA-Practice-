class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start=0;
        int end=nums.size()-1;
        int middle = (start+end)/2;
         
        while(start<=end)
        {
            if(nums[middle]==target)
                return middle;
            if(nums[middle]<target)
            {
                start = middle+1;
            }
            if(nums[middle]>target)
            {
                end = middle-1;
            }
            middle = (start+end)/2;
        }
        
         return -1;  
        
    }
};
