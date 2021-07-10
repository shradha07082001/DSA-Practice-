class Solution {
public:
    int coinChange(vector<int>& coins, int n) 
    {
        int m =coins.size();
        int dp[n+1];
        dp[0]=0;
        for(int i=1;i<=n;i++)
        {
            int temp = INT_MAX-1;
            for(int j=0;j<m;j++)
            {
                if(i-coins[j]>=0)
                    temp = min(temp,dp[i-coins[j]]);
            }
            dp[i] = temp+1;
        }
        if(dp[n]==INT_MAX)
           return -1;
        return dp[n];
    }
};
