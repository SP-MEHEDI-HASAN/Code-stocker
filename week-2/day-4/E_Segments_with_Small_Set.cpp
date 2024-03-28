#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, k;
	cin >> n >> k;
	vector<ll> fre(100001);
	ll ar[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	ll i, j;
	i = j = 0;
	ll cnt = 0;
	ll sz = 0;
	j = 0;
	ll ans = 0;
	if (k == 0)
		cout << 0 << "\n";
	else
	{
		while (j <= n)
		{
			if (cnt <= k)
			{
				ans = ans + sz;
			}
			else
			{
				while (cnt > k)
				{
					if (--fre[ar[i]] == 0)
					{
						cnt--;
					}
					i++;
					sz--;
				}
				if (cnt <= k)
				{
					ans += sz;
				}
			}
			if (j < n && ++fre[ar[j]] == 1)
				cnt++;
			j++;
			sz++;
		}
		cout << ans << "\n";
	}
}