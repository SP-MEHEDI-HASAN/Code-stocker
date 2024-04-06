#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, sz;
		cin >> n >> sz;
		ll ar[n];
		for (ll i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		ll l, r;
		l = r = 0;
		ll ans = 0;
		ll cnt = 0;
		int c = 0;
		for (; r < n;)
		{
			if(ar[r]%2 == 1)
			cnt++;
			if(r-l+1 == sz)
			{
				if(cnt > 0)
				c++;
				if(ar[l]%2 == 1)
				cnt--;
				l++;
			}
			r++;
		}
		cout << c << "\n";
	}
}