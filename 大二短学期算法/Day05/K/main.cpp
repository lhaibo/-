#include <bits/stdc++.h>
using namespace std;

vector<int> a,b,dp;
int n;
int main()
{
    /*
    5
    2 4 5 3 1 
    4 3 2 1 
    2 6 11 14 15

     */
    while (1==scanf("%d",&n))
    {
        int sum=0;
        a.clear();b.clear();dp.clear();
        a.push_back(0);
        dp.push_back(0);
        for (int i = 1; i <= n; i++)
        {
            int tmp;
            scanf("%d",&tmp);
            a.push_back(tmp);
            dp.push_back(tmp+dp[i-1]);
        }
        b.push_back(0);
        for (int i = 1; i <= n-1; i++)
        {
            int tmp;
            scanf("%d",&tmp);
            b.push_back(tmp);
        }
        b.push_back(0);
        //b.push_back(0);
        for (int i = 2; i <=n; i++)
        {
            int temp=min(dp[i-1]+a[i],dp[i-2]+b[i-1]);
            dp[i]=min(dp[i],temp);
        }
        
        printf("%d\n",dp[n]);
        
        
    }
    

    return 0;
}