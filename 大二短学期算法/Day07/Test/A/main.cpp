#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> num[101];
int main()
{
    while (~scanf("%d%d",&n,&m))
    {
        int a,b;
        memset(num,0,sizeof(num));
        
        for (int i = 1; i <= m; i++)
        {
            scanf("%d%d",&a,&b);
            num[a].push_back(b);
            num[b].push_back(a);
        }
        for (int i = 1; i <= n; i++)
        {
            sort(num[i].begin(),num[i].end());
        }
        
        for (int i = 1; i <= n; i++)
        {
            printf("Node %d:",i);
            if (num[i].size()==0)
            {
                printf("No AdjNode");
            }
            else
            {
                for (int j = 0; j < num[i].size(); j++)
                {
                    if (j==0)
                    {
                        printf("%d",num[i][j]);
                    }
                    else
                    {
                        printf("-->%d",num[i][j]);
                    }
                }
            }       
            printf("\n");
        }
        printf("============\n");
    }
    
    return 0;
}