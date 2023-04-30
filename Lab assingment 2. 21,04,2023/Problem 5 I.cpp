#include<bits/stdc++.h>
using namespace std;
const int N = 1e9;
int dp[10005][4];
int min_operation(int num,int ope);
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<=n; i++)
        for(int j = 0; j<=3; j++)dp[i][j] = N;
    dp[1][1] =  0;
    dp[1][2] =  0;
    dp[1][3] =  0;

    for(int num=2; num<=n; num++)
    {
        if(num%3==0)
        {
              dp[num][3] = min({dp[num/3][3],dp[num/3][2],dp[num/3][1]})+1;
        }
        if(num%2==0)
        {
            dp[num][2] =  min({dp[num/2][3],dp[num/2][2],dp[num/2][1]})+1;
        }

        dp[num][1] = min({dp[num-1][3],dp[num-1][2],dp[num-1][1]})+1;
    }
    cout<<min({dp[n][1],dp[n][2],dp[n][3]});
    return 0;
}

