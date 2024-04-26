#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		ll ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		int tst[32] = {0};
		bool flag = false;
		for (int i = 0; i < n; i++)
		{
			int cnt = 0;
			while (ar[i] > 0)
			{
				if ((ar[i] & 1LL) == 1)
				{
					tst[cnt]++;
					flag = true;
				}
				cnt++;
				ar[i] = ar[i] >> 1;
			}
		}
		if (flag)
		{
			int g = 0;
			for (int i = 0; i < 32; i++)
			{
				g = __gcd(g, tst[i]);
			}
			for (int i = 1; i <= g; i++)
			{
				if (g % i == 0)
					cout << i << " ";
			}
			cout << "\n";
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				cout << i << " ";
			}
			cout << "\n";
		}
	}
}