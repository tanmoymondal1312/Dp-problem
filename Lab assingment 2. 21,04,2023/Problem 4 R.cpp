class Solution
{
public:
    long long dp[38];
    Solution()
    {
        for(int i=1; i<38; i++)dp[i]=-1;
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
    }
    long long  tribonacci(int n)
    {
        if(n<=2)return dp[n];
        if(dp[n]!=-1)return dp[n];
        dp[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        return dp[n];
    }
};
