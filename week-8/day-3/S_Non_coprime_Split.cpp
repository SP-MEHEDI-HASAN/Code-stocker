#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<bool> v(10000001, true);
	for (int i = 2; i * i <= 10000001; i++)
	{
		if (v[i])
		{
			for (int j = i + i; j <= 10000001; j += i)
			{
				v[j] = false;
			}
		}
	}
	int t;
	cin >> t;
	while (t--)
	{
		int l, r;
		cin >> l >> r;
		int ans = -1;
		while (l <= r)
		{
			if (!v[l])
			{
				for (int i = 2; i * i <= l; i++)
				{
					if (l % i == 0)
					{
						ans = i;
						break;
					}
				}
			}
			if (ans != -1)
				break;
			l++;
		}
		if (ans != -1)
			cout << ans << " " << l - ans << "\n";
		else
			cout << ans << "\n";
	}
}