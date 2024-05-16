#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n = 30000;
	vector<bool> v(n + 1, true);
	for (ll i = 2; i * i <= n; i++)
	{
		if (v[i])
		{
			for (ll j = i + i; j <= n; j += i)
			{
				v[j] = false;
			}
		}
	}
	vector<ll> prime;
	ll cnt = 0;
	for (ll i = 2; i <= n; i++)
	{
		if (v[i])
		{
			cnt++;
			prime.push_back(i);
		}
	}
	ll t;
	cin >> t;
	while (t--)
	{
		auto fun = [&](ll trg1)
		{
			ll l = 0;
			ll r = prime.size();
			ll mid = (r - r / 2) + l / 2;
			ll ans;
			while (l <= r)
			{
				if (prime[mid] >= trg1)
				{
					r = mid - 1;
					ans = mid;
				}
				else
					l = mid + 1;
				mid = (r - r / 2) + l / 2;
			}
			return prime[ans];
		};
		ll d;
		cin >> d;
		ll trg1 = fun(d + 1);
		ll trg2 = fun(trg1 + d);
		cout << trg1*trg2 << "\n";
	}
}