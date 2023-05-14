#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numSquares(int num)
    {
        vector<int>dp;
        dp.resize(num+1,-1);
        return solve(num,dp);
    }
    int solve(int Targ, vector<int>&dp)
    {
        if(Targ==0)
            return 0;
        if(dp[Targ]!=-1)
            return dp[Targ];
        int ans=1e9;
        for(int i=1; i*i<=Targ; i++)
        {
            int square=i*i;
            ans=min(ans,1+solve(Targ-square,dp));
        }
        dp[Targ]=ans;
        return ans;
    }
};
int main()
{
    Solution a;
    cout<<a.numSquares(13);
    return 0;
}

