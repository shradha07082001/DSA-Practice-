class Solution {
public:
    int change(int amount, vector<int>& coins) 
    {
        vector<int>dp(amount+1,0);
        dp[0]=1;
        for(int i=0;i<coins.size();i++)
        {
            for(int j=coins[i];j<dp.size();j++)
            {
                int rem = j-coins[i];
                if(dp[rem]>=1)
                {
                    dp[j]+=dp[rem];
                }
            }
        }
        return dp[amount];
        
    }
};
