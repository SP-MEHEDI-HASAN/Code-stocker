#include <bits/stdc++.h>
#define ll long long
ll mod = 1e9 + 7;
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, m;
		cin >> n >> m;
		ll sum = 0;
		int i = 0;
		ll add = 1;
		while (m != 0)
		{
			if (m & 1)
			{
				sum = (sum + add) % mod;
			}
			add = (add * n) % mod;
			m = m >> 1;
		}
		cout << sum << "\n";
	}
}