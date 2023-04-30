#include<bits/stdc++.h>
using namespace std;
const int N=102;
const int M= 1e5+5;
long long dp[N][N];
int wt[N],val[N];
long long knapsack(int n,int cap)
{
    if(n==0)
    {
        return 0;
    }
    if (dp[n][cap]==-1)
    {
        return dp[n][cap];
    }
    if(cap<wt[n])
    {
        int ans=knapsack(n-1,cap);
    }
    int ans1=val[n]+knapsack(n-1, cap-wt[n]);
    int ans2=knapsack(n-1,cap);
    int ans=max(ans1,ans2);
}



int main()
{
    int n,cap;
    cin>>n>>cap;
    for(int i=1;i<=n;i++)
    {
        cin>>wt[i]>>val[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=cap;j++)
        {
            dp[i][j]==-1;
        }
    }
    cout<<knapsack(n,cap)<<"\n";
}
