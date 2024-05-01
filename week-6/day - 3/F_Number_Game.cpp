#include <bits/stdc++.h>
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
		auto ok = [&](int k)
		{
			int i = n - 1;
			int j = 0;
			while (j <= i)
			{
				if (v[i] <= k)
				{
					k--;
					i--;
					j++;
				}
				else
				{
					i--;
				}
			}
			if (k == 0)
				return true;
			return false;
		};
		int l = 0;
		int r = 100;
		int mid = (l + r) / 2;
		int ans = 0;
		while (l <= r)
		{
			if (ok(mid))
			{
				ans = mid;
				l = mid + 1;
			}
			else
				r = mid - 1;
			mid = (l + r) / 2;
		}
		cout << ans << "\n";
	}
}