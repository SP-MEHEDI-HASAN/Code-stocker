#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(ll a, ll b)
{
	return a > b;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n, m;
		cin >> n >> m;
		vector<ll> v;
		for (int i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end(), cmp);
		for (int i = 1; i < n; i++)
		{
			v[i] = v[i - 1] + v[i];
		}
		while (m--)
		{
			int k;
			cin >> k;
			int l = 0;
			int r = n - 1;
			int mid = (l + r) / 2;
			int ind = -1;
			while (l <= r)
			{
				if (v[mid] == k)
				{
					ind = mid;
					break;
				}
				else if (v[mid] >= k)
				{
					ind = mid;
					r = mid - 1;
				}
				else
					l = mid + 1;
				mid = (l + r) / 2;
			}
			if (ind != -1)
				cout << ind + 1 << "\n";
			else
				cout << ind << "\n";
		}
	}
}