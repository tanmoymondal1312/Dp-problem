#include<bits/stdc++.h>
using namespace std;
const int sz=1e4+10;
const int oo=0x3f3f3f3f;
long long arr[sz];
int n;
long long dp[sz];
//long long solve(int i)
//{
//    if(i==n)
//    {
//        return 0;
//    }
//    if(dp[i]!=-1)
//    {
//        return dp[i];
//    }
//    dp[i]=max(dp[i],solve(min(i+1,n)));
//    dp[i]=max(dp[i],solve(min(i+1,n))+arr[i]);
//    return dp[i];
//}
int main()
{
    int t;
    cin>>t;
    int k=1;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        dp[n]=0;
        for(int i=n-1;i>=0;i--)
        {
            dp[i]=max(dp[i],dp[min(i+1,n)]);
            dp[i]=max(dp[i],dp[min(i+2,n)]+arr[i]);
        }
        cout<<"Case "<<k++<<": "<<dp[0]<<"\n";
    }
    return 0;
}
