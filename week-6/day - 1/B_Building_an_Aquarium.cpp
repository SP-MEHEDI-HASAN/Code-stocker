#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, w;
		cin >> n >> w;
		vector<ll> v;
		for (ll i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		ll i, j;
		ll sz = 1;
		ll h = 0;
		// for (ll k : v)
		// 	cout << k << " ";
		// cout << "\n";
		ll hei;
		for (ll i = 0; i < n;)
		{
			j = i + 1;
			while (v[i] == v[j] && j < n)
			{
				sz++;
				j++;
			}
			ll pros = j;
			if (j != n)
				hei = v[j] - v[i];
			else
				hei = v[j - 1] - v[i];
			i = j;
			if (hei * pros <= w)
			{
				w -= hei * pros;
				h += hei;
			}
			else
			{
				h += (w / pros);
				w = 0;
				break;
			}
		}
		if (w > 0)
		{
			h = h + (w / n);
		}
		cout << h + v[0] << "\n";
	}
}