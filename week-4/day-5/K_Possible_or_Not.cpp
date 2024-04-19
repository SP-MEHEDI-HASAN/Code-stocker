#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	 ios_base::sync_with_stdio(0);
    cin.tie(0);                   
    cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll ar[n];
		vector<ll> v;
		for (ll i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		ll exp = k;
		ll j = 0;
		while (exp > 0)
		{
			if (exp & 1)
			{
				v.push_back(j);
				// cout << j << " ";
			}
			j++;
			exp = exp >> 1;
		}
		ll ans = 0LL;
		ans = ~ans;
		bool no = true;
		for (ll i = 0; i < n; i++)
		{
			bool flag = true;
			for (ll j : v)
			{
				if (((ar[i] >> j) & 1) == 0)
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				ans = ans & ar[i];
			}
			if (ans == k)
			{
				cout << "YES\n";
				no = false;
				break;
			}
		}
		if (no)
			cout << "NO\n";
	}
}