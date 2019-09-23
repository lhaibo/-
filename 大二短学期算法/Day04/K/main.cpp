#include<bits/stdc++.h>
using namespace std;
int maps[1005][1005],a,b,n,m;
int main()
{
	while(~scanf("%d%d",&n,&m))
	{
		memset(maps,0,sizeof(maps));
		for(int i=1;i<=n;i++)
        {
	        for(int j=1;j<=n;j++)maps[i][j]=999999;
	        maps[i][i]=0;
		}
		for(int i=1;i<=m;i++)
		{
			scanf("%d%d",&a,&b);
			//maps[i][i]=0;
			maps[a][b]=1;
			maps[b][a]=1; 
		}
		int x=1;
		for (int k = 1; k <= n; k++) 
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= n; j++) 
                maps[i][j] = min(maps[i][j],maps[i][k] + maps[k][j]);
        
        int f=2;
		for(;f<=n;f++) 
			if(maps[1][f]==999999)break;
	//	printf("%d\n",f);
		if(f>n)puts("Yes");
		else puts("No");
	}
}