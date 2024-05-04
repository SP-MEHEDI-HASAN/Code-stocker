#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	ll ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	auto fun = [&](ll md)
	{
		ll sum = 0;
		ll cur = ar[0];
		int cnt = 1;
		for (int i = 1; i < n; i++)
		{
			if (ar[i] - cur >= md)
			{
				cnt++;
				cur = ar[i];
			}
			if (cnt >= k)
				return true;
		}
		return false;
	};
	ll l = 0;
	ll r = 1e9;
	ll mid = (r - r / 2) + l / 2;
	ll ans;
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