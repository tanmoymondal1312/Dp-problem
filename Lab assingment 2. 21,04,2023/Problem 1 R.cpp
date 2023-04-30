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
        if(n==0)return 0;
        if(n>=1 && n<=2)return 1;
        if(dp[n]!=-1)return dp[n];
        dp[n] =  fib(n-1) + fib(n -2);
        return dp[n];
    }
};
