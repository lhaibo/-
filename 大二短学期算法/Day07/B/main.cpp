#include <bits/stdc++.h>
using namespace std;

char a[37] = { '0','1','2','3','4','5','6','7','8','9',
			'A','B','C','D','E','F','G','H','I','J',
			'K','L','M','N','O','P','Q','R','S','T',
			'U','V','W','X','Y','Z' };

vector<int> ans;
int main()
{
	int n, m;
	while (2== scanf("%d%d", &n, &m))
	{
		ans.clear();
		if (m > 36)
		{
			printf("Error !\n");
		}
		else
		{
			while (n != 0)
			{
				ans.push_back(n - n / m * m);
				n /= m;
			}
			for (int i = ans.size() - 1; i >= 0; i--)
			{
				printf("%c", a[ans[i]]);
			}
			printf("\n");
		}
	}
	
	



	return 0;
}