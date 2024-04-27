#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<ll> v1;
		vector<ll> v2;
		vector<ll> sum(n);
		for (int i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			v1.push_back(x);
		}
		for (int i = 0; i < m; i++)
		{
			ll x;
			cin >> x;
			v2.push_back(x);
		}
		sum[0] = v1[0];
		for (int i = 1; i < n; i++)
		{
			sum[i] = v1[i] + sum[i - 1];
		}
		for (int i = 0; i < n - 1; i++)
		{
			if (v1[i] <= v1[i + 1])
				continue;
			else
				v1[i + 1] = v1[i];
		}
		// for(ll p : v1)
		// cout << p << " ";
		for (int i = 0; i < m; i++)
		{
			int l = 0;
			int r = n - 1;
			int mid = (l + r) / 2;
			int ind = -1;
			while (l <= r)
			{
				if (v1[mid] <= v2[i])
				{
					l = mid + 1;
					ind = mid;
				}
				else
					r = mid - 1;
				mid = (l + r) / 2;
			}
			if (ind == -1)
				cout << 0 << " ";
			else
			{
				cout << sum[ind] << " ";
			}
		}
		cout << "\n";
	}
}
// 1 2 3 4 4 4 4