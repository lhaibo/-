#include<bits/stdc++.h>
using namespace std; 
int maps[1005][1005],a,b,j,n,m,sta,over;
int vis[105];
int ans;
int main()
{
	while(~scanf("%d%d%d",&n,&sta,&over))
	{
		memset(maps,0,sizeof(maps));
		ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			scanf("%d",&maps[i][j]); 
		}
		for(int i=1;i<=n;i++)
		{
			if(i==sta||i==over)continue;
			for(int j=1;j<=n;j++)
			{
				if(j==sta||j==over)continue;
				if(maps[sta][i]==1&&maps[i][j]==1&&maps[j][over]==1)
				ans++;
			}
			
		}
		printf("%d\n",ans);
	}
}