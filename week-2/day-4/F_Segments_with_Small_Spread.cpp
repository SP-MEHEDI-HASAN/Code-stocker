#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, k;
	cin >> n >> k;
	ll ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	int i, j;
	i = j = 0;
	ll sz = 0;
	ll mx, mn;
	multiset<ll> m;
	ll ans = 0;
	while (j < n)
	{
		m.insert(ar[j]);
		sz++;
		if (*m.rbegin() - *m.begin() <= k)
		{
			ans += sz;
		}
		else
		{
			while (*m.rbegin() - *m.begin() > k)
			{
				auto it = m.find(ar[i]);
				m.erase(it);
				sz--;
				i++;
			}
			if (*m.rbegin() - *m.begin() <= k)
			{
				ans += sz;
			}
		}
		j++;
	}
	cout << ans << "\n";
}