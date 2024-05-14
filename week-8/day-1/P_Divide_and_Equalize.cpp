#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		map<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			int n = v[i];
			for (int j = 2; j * j <= n; j++)
			{
				if (n % j == 0)
				{
					while (n % j == 0)
					{
						mp[j]++;
						n /= j;
					}
				}
			}
			if (n > 1)
				mp[n]++;
		}
		bool flag = true;
		for (auto p : mp)
		{
			if (p.second % n != 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}