#include <bits/stdc++.h>
#define ll long long
using namespace std;
void fun(vector<ll> *pal)
{
	for (ll i = 1; i <= 32768; i++)
	{
		bool flag = true;
		string s;
		ll p = i;
		while (p != 0)
		{
			char c = (p % 10) + 48;
			p = p / 10;
			s.push_back(c);
		}
		ll j = 0;
		ll k = s.size() - 1;
		while (j < k)
		{
			if (s[j] != s[k])
			{
				flag = false;
				break;
			}
			j++;
			k--;
		}
		if (flag)
			pal->push_back(i);
	}
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	vector<ll> pal;
	pal.push_back(0);
	fun(&pal);
	while (t--)
	{
		ll n;
		cin >> n;
		// cout << n << "\n";
		vector<ll> mp(1<<15);
		ll ar[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> ar[i];
			mp[ar[i]]++;
		}
		// mp[0] = 1;
		ll cnt = n;
		ll cn = 0;
		for (ll k = 0; k < n; k++)
		{
			// cout << k << "\n";
			for (ll p : pal)
			{
				ll y = mp[ar[k] ^ p];
				if (y > 0)
				{
					if ((ar[k] ^ p) == ar[k])
						cn += y - 1;
					else
						cn += y;
				}
			}
		}
		cout << cnt + cn / 2 << "\n";
	}
}