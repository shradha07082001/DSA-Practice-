class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int start=0;
        int end=nums.size()-1;
        int middle=(start+end)/2;
        int index;
        while(start<=end)
        {
            if(nums[middle]==target)
                return middle;
            
            if(nums[middle]<target)
            {
                start = middle+1;
                index = middle+1;
                if(nums.size()<=index)
                    return index;
                if(nums[middle+1]>target)
                    return middle+1;
            }
            
            if(nums[middle]>target)
            {
                end = middle-1;
                index = middle;
                if(index<=0)
                    return index;
                if(nums[middle-1]<target)
                    return middle;
            }
            
            middle = (start+end)/2;
        }
        
        return index;
        
    }
};
