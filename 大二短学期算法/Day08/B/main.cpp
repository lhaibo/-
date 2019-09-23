#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    while (~scanf("%d",&n))
    {
        for (int i = 0; i < 2*n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < 2*n-1; j++)
            {
                printf("*");
            }
            
            printf("\n");
        }
        for (int i = 0; i < 2*n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
            
            for (int j = 0; j < 4*n-1-2*i; j++)
            {
                printf("*");
            }
                
           
            printf("\n");
        }
        
    }
    
    return 0;
}