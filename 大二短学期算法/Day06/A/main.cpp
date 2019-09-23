#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,m;
    while (2==scanf("%d%d",&n,&m))
    {
        if (n%2==0)
        {
            printf("Input error!\n");
        }
        else
        {
            int ans=0;
            for (int i = 0; i < m;)
            {
                if (ans%2==0)
                {
                    ans/=2;
                }else
                {
                    ans=3*n+1;
                }
                
                if (ans%2==1)
                {
                    ans=3*n+1;
                    i++;
                }else
                {
                    ans/=2;
                }
            }
            printf("%d\n",ans);
        }
        
        
    }
    
    return 0;
}