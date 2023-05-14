//#include<bits/stdc++.h>
//using namespace std;
//long long int dp[1005][1005];
//char grid[1005][1005];
//long long int solve(int x,int y);
//int main ()
//{
//    int n;
//    cin >> n;
//    memset(dp,-1,sizeof(dp));
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<n; j++)
//        {
//            cin >> grid[i][j];
//        }
//    }
//    cout<<solve(n-1, n-1);
//    return 0;
//}
//long long int solve(int x, int y)
//{
//    if(grid[x][y] == '*')
//    {
//        return 0;
//    }
//    if(x == 0 && y == 0)
//    {
//        return 1;
//    }
//    if(dp[x][y] != -1)
//    {
//        return dp[x][y];
//    }
//    long long int ans = 0;
//    if(x >0&& grid[x-1][y]!='*')
//    {
//        ans += solve(x-1, y);
//    }
//    if(y >0&& grid[x][y-1]!='*')
//    {
//        ans += solve(x, y-1);
//        dp[x][y]=ans;
//    }
//    return ans;
//}
//
//
//Iterative
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int  grid[n][n];
    memset(grid, -1, sizeof(grid));
    grid[0][0] =1;
    for(int i=0; i<n; i++)
    {
        grid[i][0]=1;
    }
    for(int i=0; i<n; i++)
    {
        grid[0][i]=1;
    }
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        for(int j=0; j<n; j++)
        {
            if(s[j]=='*')
            {
                grid[i][j]=-9;
            }
        }
    }
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(grid[i][j]!=-9)
            {
                int ans =0;
                if(grid[i-1][j]!=-9)
                {
                    ans+=grid[i-1][j];
                }
                if(grid[i][j-1]!=-9)
                {
                    ans+=grid[i][j-1];
                }
                grid[i][j] = ans;
            }
        }
    }

    if(grid[n-1][n-1]<=0 || grid[0][0]==-9)
    {
        cout<<0;
        return 0;
    }
    cout<<grid[n-1][n-1];
    return 0;
}

