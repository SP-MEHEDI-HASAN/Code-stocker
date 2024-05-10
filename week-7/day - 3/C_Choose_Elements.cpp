#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, k;
	cin >> n >> k;
	ll ar[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	for (ll i = 0; i < n - 1; i++)
	{
		for (ll j = i + 1; j < n; j++)
		{
			if (ar[i] < ar[j])
			{
				swap(ar[i], ar[j]);
			}
		}
	}
	ll sum = 0;
	for (ll i = 0; i < k; i++)
	{
		sum += ar[i];
	}
	cout << sum << "\n";
}