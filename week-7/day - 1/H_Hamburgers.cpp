#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	string st;
	cin >> st;
	ll x, y, z;
	cin >> x >> y >> z;
	tuple<ll, ll, ll> p = make_tuple(x, y, z);
	cin >> x >> y >> z;
	tuple<ll, ll, ll> cst = make_tuple(x, y, z);
	ll re;
	cin >> re;
	ll b, s, c;
	b = s = c = 0;
	for (char cr : st)
	{
		if (cr == 'B')
			b++;
		else if (cr == 'S')
			s++;
		else
			c++;
	}
	auto fun = [&](ll md)
	{
		ll t_b = max(md * b - get<0>(p), 0LL);
		ll t_s = max(md * s - get<1>(p), 0LL);
		ll t_c = max(md * c - get<2>(p), 0LL);
		ll total_cst = t_b * get<0>(cst) + t_s * get<1>(cst) + t_c * get<2>(cst);
		if (total_cst <= re)
			return true;
		return false;
	};
	ll l = 0;
	ll r = 1e12 + 500;
	ll mid = (r - r / 2) + l / 2;
	ll ans = 0;
	while (l <= r)
	{
		if (fun(mid))
		{
			l = mid + 1;
			ans = mid;
		}
		else
			r = mid - 1;
		mid = (r - r / 2) + l / 2;
	}
	cout << ans << "\n";
}