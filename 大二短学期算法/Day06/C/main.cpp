#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[101][101];
int b[101][101];
int ans[101];
int main()
{
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&m);
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < j; k++)
            {
                int tmp;
                scanf("%d",&tmp);
                a[j][k]=tmp;
            }
        }
        b[0][0]=a[0][0];
        b[1][0]=a[0][0]+a[1][0];
        b[1][1]=a[0][0]+a[1][1];
        for (int j = 0; j < m; j++)
        {
            b[j][0]=b[j-1][0]+a[j][0];
            b[j][m-1]=b[j-1][m-1]+a[j][m-1];
        }
        for (int j = 2; j <= m; j++)
        {
            for (int k = 1; k <= j; k++)
            {
                b[j][k]=min(b[j-1][k-1]+a[j][k],b[j-1][k]+a[j][k]);
            }
        }
    
        int sm=b[m-1][0];
        int smIn=0;
        int x=0;
        for (int j = 0; j < m; j++)
        {
            if (b[m-1][j]<sm)
            {
                sm=b[m-1][j];
                smIn=j;
                ans[x++]=a[m-1][j];
            }
            
        }
        for (int j = m-1; j >0; j--)
        {
            if(b[j][smIn]>b[j][smIn-1])
            {
                ans[x++]=a[j][smIn-1];
                smIn--;
            }else
            {
                ans[x++]=a[j][smIn];
            }
            
        }
        printf("%d\n",sm);
        for (int j = 1; j <= m; j++)
        {
            if (j==1)
            {
                printf("%d",a[m-1]);
            }else
            {
                 printf("-->%d",a[m-1-j]);
            }
        }
        printf("\n");
        
        
    }
    
    return 0;
}