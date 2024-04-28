#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		auto valid = [&](ll dif)
		{
			ll cnt = 1;
			ll cur = v[0] + dif;
			for (int i = 1; i < n; i++)
			{
				if (max(v[i] - cur, -1 * (v[i] - cur)) <= dif)
				{
					continue;
				}
				else
				{
					cur = v[i] + dif;
					cnt++;
				}
				if (cnt > 3)
					return false;
			}
			return true;
		};
		ll l = 0;
		ll r = 1e9;
		ll mid = (r - r / 2) + l / 2;
		ll ans;
		while (l <= r)
		{
			if (valid(mid))
			{
				ans = mid;
				r = mid - 1;
			}
			else
				l = mid + 1;
			mid = (r - r / 2) + l / 2;
		}
		cout << ans << "\n";
	}
}