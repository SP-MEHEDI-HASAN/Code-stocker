#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, t1, t2;
	cin >> n >> t1 >> t2;
	auto ok = [&](ll md)
	{
		if (md / t1 + md / t2 >= n-1)
		{
			return true;
		}
		return false;
	};
	ll l = 0;
	ll r = 1e9+20;
	ll mid = (r - r / 2) + l / 2;
	ll ans = 0;
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
	cout << ans+min(t1,t2) << "\n";
}