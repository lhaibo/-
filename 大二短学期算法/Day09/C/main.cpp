#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a,b;
int main()
{
    /*
    1
    1 -1
     */
    while (~scanf("%d",&n))
    {
        int t=0;
       for (int i = 0; i < n; i++)
       {
           scanf("%d",&t);
           a.push_back(t);
       }
       int sum=0;
       int c=1;
       int ma=a[0];
       for (int i = 0; i < n; i+=2)
       {
           b.push_back(a[i]-a[i+1]);
       }
       for (int i = 1; i < n; i+=2)
       {
           b.push_back(a[i]+a[i+1]);
       }
       printf("%d\n",ma);
       
    }
    
    return 0;
}
