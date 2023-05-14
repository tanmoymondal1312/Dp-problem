#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int fan(int index,vector<int>&arr, vector<int>&dp)
    {
        if(index == 0)
        {
            return arr[0];
        }
        if(index < 0)
        {
            return 0;
        }
        if(dp[index] != -1)
        {
            return dp[index];
        }

        int ans1= arr[index] + fan(index-2,arr,dp);
        int ans2= fan(index-1,arr,dp);
        int ans= max(ans1, ans2);
        dp[index]=ans;
        return ans;
    }
    int rob(vector<int>&nums)
    {
        int len = nums.size();
        if(len==1)
            return nums[0];
        vector<int> numarr1,numarr2;
        vector<int> dp1(len,-1);
        vector<int> dp2(len,-1);
        for(int i=0; i<len; i++)
        {
            if(i!=0)
                numarr1.push_back(nums[i]);
            if(i!=len-1)
                numarr2.push_back(nums[i]);
        }
        int ans1 = fan(len-2,numarr1,dp1);
        int ans2 = fan(len-2, numarr2,dp2);
        return max(ans1, ans2);
    }
};
int main()
{
    vector<int>a= {4,5,6,7,2,3,4};
    Solution n;
    cout<<n.rob(a);
    return 0;
}

