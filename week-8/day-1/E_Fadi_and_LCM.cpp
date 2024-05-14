#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll ans;
	for (ll i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			ll x = i;
			ll y = n / i;
			if (x / __gcd(x, y) * y == n)
			{
				ans = i;
			}
		}
	}
	cout << ans << " " << n / ans << "\n";
}