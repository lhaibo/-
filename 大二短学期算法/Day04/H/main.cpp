#include<bits/stdc++.h>
#define maxn 101
using namespace std;
int a[maxn][maxn];
int visited[maxn];
int m,n;
int main()
{
    while (2==scanf("%d%d",&n,&m))
    {
        init();
        for (int i = 1; i <= m; i++)
        {
            int l,r;
            scanf("%d%d",&l,&r);
            a[l][r]=1;
        }
        for (int i = 1; i <= n; i++)
        {
            if (visited[i]==0)
            {
                printf("Yes\n");
                return 0;
            }
            
        }
        printf("No\n");

        
    }
    
    return 0;
}
void dfs(int d)
{
    for (int i = 1; i <= n; i++)
    {
        if (visited[i]==0&&a[d][i]==1)
        {
            visited[i]=1;
            dfs(i);
        }
    }
}
void init()
{
    memset(visited,0,sizeof(visited));
    memset(a,0,sizeof(a));
}