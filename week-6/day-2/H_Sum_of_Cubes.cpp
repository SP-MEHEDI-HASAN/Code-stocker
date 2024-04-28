#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;

	vector<ll> v;
	for (ll i = 1; i * i * i <= 1e12; i++)
	{
		v.push_back(i * i * i);
	}
	while (t--)
	{
		ll x;
		cin >> x;
		bool flag = false;
		for (ll i = 0; i < v.size() && v[i] <= x; i++)
		{
			ll tar = x - (v[i]);
			// cout << tar << "\n";
			ll l = 0;
			ll r = 1e4 - 1;
			int ind = -1;
			ll mid = (r - r / 2) + l / 2;
			// if(tar <= INT_MAX)
			while (l <= r)
			{
				if (tar == v[mid])
				{
					cout << tar << "\n";
					flag = true;
					break;
				}
				else if (tar < v[mid])
				{
					r = mid - 1;
				}
				else
					l = mid + 1;
				mid = (r - r / 2) + l / 2;
			}
			if (flag)
				break;
		}
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}