#include<bits/stdc++.h>
using namespace std;
int a[10005];
int n;
 int main()
 {
     while (~scanf("%d",&n))
     {
         memset(a,0,sizeof(a));
         for (int i = 1; i <= n; i++)
         {
             scanf("%d",&a[i]);
         }
         sort(a+1,a+n+1);
        int sum=0;
         for (int i = 1; i <= n; i++)
         {
             sum+=a[i]*(n-i+1);
         }
         printf("%d\n",sum);
     }
     
     return 0;
 }