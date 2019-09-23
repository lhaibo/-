#include <bits/stdc++.h>
using namespace std;

int tme[101][101];
int node[101][101];
int visited[101];
int n;
void dfs(int i)
{
    for (int j = 0; j < n; i++)
    {
        if (visited[j]==0)
        {

            dfs(j);

        }else
        {
            return;
        }
    
    } 
}
int main()
{

    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        int p,q;
        scanf("%d%d",&p,&q);
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < p; k++)
            {
                node[j][k]=999999;
                node[k][j]=999999;
                tme[j][k]=999999;
                tme[k][j]=999999;
            } 
            visited[j]=0;
        }
        
        for (int j = 0; j < q; j++)
        {
            int s,v,d,t;
            scanf("%d%d%d%d",&s,&v,&d,&t);
            node[s][v]=d;
            node[v][s]=d;
            tme[s][v]=t;
            tme[v][s]=t;
        }
        for (int j = 0; j < n; j++)
        {
            dfs(j);
        }
        

    }
    
    
    
    return 0;
}