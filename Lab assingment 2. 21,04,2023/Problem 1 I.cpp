class Solution
{
public:
    int dp[31];
    Solution()
    {
        dp[0] =0;
        dp[1] =1;
        dp[2] =1;
        for(int i=3; i<31; i++)dp[i] =-1;
    }
    int fib(int n)
    {
        for(int i=3; i<=n; i++)
        {
            dp[i] =  dp[i-1]+ dp[i-2];
        }
        return dp[n];
    }
};
