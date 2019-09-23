#include <bits/stdc++.h>
using namespace std;

long long a[100001];
int main()
{
	int n;
	while (1 == scanf("%d", &n))
	{
		memset(a, 0, sizeof(a));
		a[0] = 99999;
		long long sum = 0;
		long long ans = 0;
		int c = 0;
		int ansc = 0;
		for (int i = 1; i <= n; i++)
		{
			scanf("%lld", &a[i]);
			if (a[i] >= a[i-1])
			{
				sum = sum + a[i] - a[i - 1];
				c++;
			}
			else
			{
				ans = ans*ansc > sum*c ? ans : sum;
				ansc = c;
				c = 0;
				sum = 0;
			}
		}
		
		printf("%lld\n", ansc*ans>sum*c?ansc*ans:sum*c);

		/*
6
2000 2000 2000 2100 2200 2300 
*/
	}
	return 0;
}