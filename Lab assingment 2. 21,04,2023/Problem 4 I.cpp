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
    int tribonacci(int n)
    {
        for(int i =3; i<=n; i++)
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        return dp[n];
    }
};
