#include<iostream>
#include<bits/stdc++.h>
typedef long long int ln;
ln dp[100005]={0};
ln dp2[100005];
using namespace std;
int main()
{
    long long int a,b,m=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        dp[b]++;
    }
    dp2[0]=0;
    dp2[1]=dp[1];

    for(int i=2;i<=100005;i++)
    {
        dp2[i]=max(dp2[i-1],dp2[i-2]+i*dp[i]);
    }
    cout<<dp2[100005];
}
