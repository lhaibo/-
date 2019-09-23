#include<bits/stdc++.h>
#define MAXN 1001
using namespace std;

int n,l,r,num;
int G[MAXN][MAXN];
int main()
{
    while (3==scanf("%d%d%d",&n,&l,&r))
    {
        num=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d",G[i][j]);
            }
            
        }
        
        for (int i = 0; i < n; i++)
        {
            if (1==G[l][i])
            {
                for (int j = 0; j < n; j++)
                {
                    if (G[j][r]==1)
                    {
                        num++;
                    }
                    
                }
                
            }
            
            
        }
        printf("%d\n",num);

    }
    return 0;
}