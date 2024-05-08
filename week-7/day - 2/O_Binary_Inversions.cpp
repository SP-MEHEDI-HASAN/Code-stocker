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
		for (ll i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		ll sum = 0;
		ll ans = 0;
		ll cnt_0 = 0;
		for (ll i = 0; i < n; i++)
		{
			if (ar[i] == 1)
				sum++;
			else
			{
				ans += sum;
				cnt_0++;
			}
		}
		ll mx = LLONG_MIN;
		ll cnt_1 = 0;
		sum = 0;
		for (ll i = 0; i < n; i++)
		{
			if (ar[i] == 1)
			{
				sum = cnt_1 - cnt_0;
				mx = max(sum, mx);
				cnt_1++;
			}
			else
			{
				cnt_0--;
				sum = cnt_0 - cnt_1;
				mx = max(sum, mx);
			}
		}
		mx = max(mx,0LL);
		cout << ans + mx << "\n";
	}
}