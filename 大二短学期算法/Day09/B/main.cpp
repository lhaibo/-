#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    while (~scanf("%d",&n))
    {
        string a;
        cin>>a;
        while (a.size()>0)
        {
            if (a[a.size()-1]<='9')
            {
                if ((a[a.size()-1]-'0')%2==(n%2))
                {
                     printf("Yes\n");
                     break;
                }
                else 
                {
                     printf("No\n");
                     break;
                }
               
            }
            a=a.substr(0,a.size()-1);
        }
        if (a.size()==0)
        {
            printf("No\n");
        }
    }
    
    return 0;
}
