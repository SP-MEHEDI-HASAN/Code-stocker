#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(ll a, ll b)
{
	return a > b;
}
int main()
{
	int k, n;
	cin >> k >> n;
	ll ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	sort(ar, ar + n, cmp);
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << ar[i] << " ";
	// }
	auto fun = [&](ll num_coun)
	{
		ll sum = 0;
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (ar[i] >= num_coun)
			{
				cnt++;
			}
			else
			{
				sum += ar[i];
				if (sum >= num_coun)
				{
					sum = sum % num_coun;
					cnt++;
				}
			}
			if (cnt >= k)
				return true;
		}
		if (cnt >= k)
				return true;
		return false;
	};
	ll l = 0;
	ll r = 3e10;
	ll mid = (r - r / 2) + l / 2;
	ll ans;
	while (l <= r)
	{
		if (fun(mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
		mid = (r - r / 2) + l / 2;
		// cout << mid << " ";
	}
	// cout << "\n";
	cout << ans << "\n";
}