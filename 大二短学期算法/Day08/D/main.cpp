#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, start, over;
	while (~scanf("%d%d%d", &n, &start, &over))
	{
		int c = 0;
		
		for (int i = 1; i <= n; i++)
		{
			if (i>=start&&i<=over)
			{
				int k = sqrt(i);
				c += (i == k * k);
			}
		}
		
		printf("%d\n", c);
	}

	
	return 0;
}

