#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	ll ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	sort(ar, ar + n);
	auto num_op = [&](ll med)
	{
		ll cnt = 0;
		for(int i = n/2;i<n;i++)
		{
			cnt += ((ar[i] < med)?med-ar[i]:0);
			if(cnt > m)
			return false;
		}
		return true;
	};
	ll l = 0;
	ll r = 2e9;
	ll mid = (r - r / 2) + l / 2;
	ll ans = -1;
	while (l <= r)
	{
		if (num_op(mid))
		{
			ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
		mid = (r - r / 2) + l / 2;
	}
	cout << ans << "\n";
}