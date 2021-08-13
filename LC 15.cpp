class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        if(nums.size()<3)
            return {};
        
        set<vector<int>> sol;
    
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    sol.insert({nums[i],nums[j++],nums[k--]});
                }
                else if ( sum >0) k--;
                else if (sum<0) j++;
                
            }
        }
        vector<vector<int>> ans;
        for(auto it:sol)ans.push_back(it);
        return ans;
    }
};
