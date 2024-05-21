#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll ar[n];
		ll sum = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> ar[i];
			sum += ar[i];
		}
		ll g = 0;
		ll mx = LLONG_MIN;
		ll s = 0;
		for (ll i = 0; i < n; i++)
		{
			s += ar[i];
			g = __gcd(s, sum);
			if (g != sum)
				mx = max(g, mx);
		}
		cout << mx << "\n";
	}
}