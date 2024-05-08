#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		ll ar[n];
		ll sum = 0;
		for (ll i = 0; i < n; i++)
		{
			cin >> ar[i];
			sum += ar[i];
		}
		ll mis = (n * (n + 1)) / 2 - sum;
		k = k % (n + 1);
		for (ll i = n - k + 1; i < n; i++)
		{
			cout << ar[i] << " ";
		}
		if (k != 0)
			cout << mis << " ";
		for (ll i = 0; i < n - k; i++)
		{
			cout << ar[i] << " ";
		}
		cout << "\n";
	}
}