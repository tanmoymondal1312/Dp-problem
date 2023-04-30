#include<bits/stdc++.h>
using namespace std;
const int N = 1e9;
int dp[10005][4];
int min_operation(int num,int operatoR);
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<=n; i++)
    {
        for(int j = 0; j<=3; j++)
        {
            dp[i][j] = N;
        }
    }
    dp[1][1] =  0;
    int a=N;
    int b=N;
    int c=N;
    a = min_operation(n,1);
    if(n%2==0)
        b = min_operation(n,2);
    if(n%3==0)
        c = min_operation(n,3);
    cout<<min({a,b,c});
    return 0;
}
int min_operation(int num,int operatoR)
{
    if (num == 1)
    {
        return dp[num][1];
    }
    if(dp[num][operatoR] !=N)
    {
        return dp[num][operatoR];
    }
    int op1=1e4,op2=1e4,op3=1e4;
    if(operatoR !=1 && num % operatoR == 0)
    {
        int next_num = num/operatoR;
        op1 = min_operation(next_num,1)+1;
        if(next_num%2==0)
        {
            op2 = min_operation(next_num,2)+1;
        }
        if(next_num%3==0)
        {
            op3 = min_operation(next_num,3)+1;
        }
    }
    else if(operatoR == 1)
    {
        int next_num = num-1;
        op1 = min_operation(next_num,1)+1;
        if(next_num%2==0)
        {
            op2 = min_operation(next_num,2)+1;
        }
        if(next_num%3==0)
        {
            op3 = min_operation(next_num,3)+1;
        }
    }
    dp[num][operatoR]=min({op1,op2,op3});
    return min({op1,op2,op3});
}

