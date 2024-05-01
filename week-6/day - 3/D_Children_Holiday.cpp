#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, m;
	cin >> m >> n;
	ll t[n], z[n], y[n];
	for (int i = 0; i < n; i++)
	{
		cin >> t[i] >> z[i] >> y[i];
	}
	auto ok = [&](ll time)
	{
		ll total = 0;
		for (int i = 0; i < n; i++)
		{
			total += (time / (t[i] * z[i] + y[i])) * z[i] + min((time % (t[i] * z[i] + y[i])) / t[i], z[i]);
			if (total >= m)
				return true;
		}
		return false;
	};
	ll l = 0;
	ll r = 5e6;
	ll mid = (r - r / 2) + l / 2;
	ll ans;
	while (l <= r)
	{
		if (ok(mid))
		{
			r = mid - 1;
			ans = mid;
		}
		else
			l = mid + 1;
		mid = (r - r / 2) + l / 2;
	}
	cout << ans << "\n";
	ll total = 0;
	ll time = ans;
	vector<ll> v_t;
	vector<ll> v;
	for (int i = 0; i < n; i++)
	{
		ll pro = (time / (t[i] * z[i] + y[i])) * z[i] + min((time % (t[i] * z[i] + y[i])) / t[i], z[i]);
		ll pro1 = ((time - 1) / (t[i] * z[i] + y[i])) * z[i] + min(((time - 1) % (t[i] * z[i] + y[i])) / t[i], z[i]);
		// if (total + pro <= m)
		// {
		// 	total += pro;
		// 	cout << pro << " ";
		// }
		// else if (total != m)
		// {
		// 	cout << m - total << " ";
		// 	total = m;
		// }
		// else
		// cout << 0 << " ";
		v.push_back(pro);
		v_t.push_back(pro1);
		total += pro;
	}
	for (int i = n - 1; i >= 0 && total > m; i--)
	{
		if (v[i] != v_t[i])
		{
			v[i]--;
			total--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << "\n";
}