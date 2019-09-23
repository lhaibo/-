#include<bits/stdc++.h>
using namespace std;
#define MAXN 51

int n, k, l;
int a[MAXN][MAXN];
int b[MAXN];
int ans[MAXN];
void DFS(int x,int point);
vector<int>ansq[55];
int main()
{
	int i, j;
	scanf("%d", &n);
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				
                scanf("%d", &a[i][j]);

			}
		}
		k = 0;
		l = 0;
		for (j = 0; j < n; j++)
			b[j] = 1;
		for (i = 0; i < n; i++)
		{
			if (b[i] == 1)
			{
				DFS(i,i);
			}

		}
        for(int i=0;i<n;i++)
        {
            int l=ansq[i].size();
            if(l!=0)
            for(int j=0;j<l;j++)
            printf("%d ",ansq[i][j]);
            puts("");
        }
	}
	return 0;
}

void DFS(int x,int point)
{

	int i, j;
	if (b[x] == 1)
	{
		ans[k++] = x;
		b[x] = 0;
	}

	if (k == n)
	{
		for (i = 0; i < n; i++)
		{
            ansq[point].push_back(ans[i]);
		}
		//printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (a[x][i] == 1 && b[i] == 1)
		{
			ans[k++] = i;
			b[i] = 0;
		}
	}
	DFS(ans[++l],point);
	return;
}