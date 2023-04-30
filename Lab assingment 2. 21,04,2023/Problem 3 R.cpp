#include<iostream>
#include<bits/stdc++.h>
typedef long long int ln;
using namespace std;
ln dp[100005]={0};
ln boredom(const int i)
{
    if(i==0)
    {
        return 0;
    }
    if(i==1)
    {
        return dp[1];
    }
    return max(boredom(i-1),boredom(i-2)+i*dp[i]);
}

int main()
{
    long long int a,b,m=0;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b;
        dp[b]++;
        m=max(m,b);
    }
    cout<<boredom(m);
}
