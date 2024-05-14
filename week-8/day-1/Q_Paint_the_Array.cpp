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
		vector<ll> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		ll g1, g2;
		g1 = g2 = 0;
		for (int i = 0; i < n; i += 2)
		{
			g1 = __gcd(v[i], g1);
		}
		for (int i = 1; i < n; i += 2)
		{
			g2 = __gcd(v[i], g2);
		}
		// cout << g1 << " " << g2 << "\n";
		bool flag1 = true;
		bool flag2 = true;
		for (int i = 0; i < n; i += 2)
		{
			if (v[i] % g2 == 0)
			{
				flag1 = false;
				break;
			}
		}
		if (flag1)
		{
			cout << g2 << "\n";
			continue;
		}
		for (int i = 1; i < n; i += 2)
		{
			if (v[i] % g1 == 0)
			{
				flag2 = false;
				break;
			}
		}
		if (flag2)
		{
			cout << g1 << "\n";
			continue;
		}
		cout << 0 << "\n";
	}
}