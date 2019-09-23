#include<bits/stdc++.h>
using namespace std;
int n,m;
bool ok(int num)
{
    for (int i = 1; i <= n; i++)
    {
        if (num%10>m)
        {
            return false;
        }
        num/=10;
        
    }
    return true;
}

int main()
{
    while (2==scanf("%d%d",&n,&m))
    {
        int start=0,over=0;
        for (int i = 0; i < n; i++)
        {
            start+=pow(10,i);
            
        }
        
        for (int  i = start; i <= over; i++)
        {
            if (ok(i))
            {
                printf("%d\n",i);
            }
            
        }
        
    }
    
    return 0;
}