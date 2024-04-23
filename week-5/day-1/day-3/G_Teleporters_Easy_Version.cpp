#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, coin;
		cin >> n >> coin;
		vector<ll> v;
		for (int i = 1; i <= n; i++)
		{
			ll x;
			cin >> x;
			v.push_back(x + i);
		}
		sort(v.begin(), v.end());
		ll sum = 0;
		int cnt = 0;
		for (ll i : v)
		{
			if (sum + i > coin)
				break;
			cnt++;
			sum += i;
		}
		cout << cnt << "\n";
	}
}