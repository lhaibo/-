#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> num;
vector<int> expn;
int main()
{
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int c = 0;

		scanf("%d", &m);
		int ma = m;

		int p = sqrt(m);
		for (int j = 2; j <= p; j++)
		{
			if (m % j == 0)
			{
				if (num.size() == 0)
				{
					num.push_back(j);
				}
				else if (num[num.size() - 1] != j)
				{
					num.push_back(j);
				}
				c++;
				m /= j;
				j--;
				continue;
			}
			if (c != 0)
			{
				expn.push_back(c);
				c = 0;
			}
		}
		if (m != 1)
		{
			num.push_back(m);
			expn.push_back(1);
		}

#pragma region A题
		int ans = 1;
		for (int j = 0; j < expn.size(); j++)
		{
			ans *= (2 * expn[j] + 1);
		}
		printf("%d\n", ans);
#pragma endregion

#pragma region B题
		/*printf("%d=", ma);
if (expn.size() == 1 && expn[0] != 0)
{
	printf("%d^%d", num[0], expn[0]);
}
else
{
	for (int j = 0; j < expn.size(); j++)
	{
		if (j != 0) printf("*");
		if (expn[j] == 0 || expn[j] == 1)
		{
			printf("%d", num[j]);
		}
		else
		{
			printf("(%d^%d)", num[j], expn[j]);
		}
	}
}
printf("\n");*/
#pragma endregion

		num.clear();
		expn.clear();
	}

	return 0;
}