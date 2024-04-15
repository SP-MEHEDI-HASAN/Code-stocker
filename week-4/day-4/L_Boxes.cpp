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
		vector<ll> ar;
		for (ll i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			ar.push_back(x);
		}
		sort(ar.begin(), ar.end());
		ll box = ar.back();
		ll cnt = 1;
		for (ll i = 0, j = ar.size() - 1; i < j;)
		{
			if (box >= ar[i])
			{
				box = box ^ ar[i];
				i++;
			}
			else
			{
				cnt++;
				j--;
				box = ar[j];
			}
		}
		cout << cnt << "\n";
	}
}