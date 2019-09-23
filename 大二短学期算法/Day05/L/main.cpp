#include <bits/stdc++.h>
#define max 501
using namespace std;

int num[max][max];
int n,m;
void init()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            num[i][j]=99999999;

        }
        num[i][i]=0;
    }
     
    //memset(num,1,sizeof(num));

}
void getDis()
{
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j< n; j++)
        {
            for (int k= 0; k < n; k++)
            {
                num[k][j]=min(num[k][j],num[k][i]+num[i][j]);
            }
        }
    }
    
}
int main()
{
    while (1==scanf("%d",&n))
    {
        init();
        for (int i = 0; i < n-1; i++)
        {
            int p,q;
            scanf("%d%d",&p,&q);
            num[p][q]=1;
            num[q][p]=1;
            
        }
        scanf("%d",&m);
        getDis();
        for (int i = 1; i <= m; i++)
        {
            int sta,end;
            scanf("%d%d",&sta,&end);
            printf("%d\n",num[sta][end]);
        }
        
        

    }
    
}