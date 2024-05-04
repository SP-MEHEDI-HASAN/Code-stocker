#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	ll ar[n];
	ll total = 0;
	ll mx = LLONG_MIN;
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		total += ar[i];
		mx = max(ar[i], mx);
	}
	auto fun = [&](ll md)
	{
		int cnt = 1;
		ll sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += ar[i];
			if (sum > md)
			{
				sum = ar[i];
				cnt++;
			}
			if (cnt > k)
				return false;
		}
		return true;
	};
	ll l = mx;
	ll r = total;
	ll mid = (r - r / 2) + l / 2;
	ll ans;
	while (l <= r)
	{
		if (fun(mid))
		{
			r = mid - 1;
			ans = mid;
		}
		else
			l = mid + 1;
		mid = (r - r / 2) + l / 2;
	}
	cout << ans << "\n";
}