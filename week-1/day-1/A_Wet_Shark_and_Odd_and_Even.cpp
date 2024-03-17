#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin >> n;
	ll ar[n];
	ll sum = 0;
	int eve = 0, odd = 0;
	ll mn = LLONG_MAX;
	for (ll i : ar)
	{
		cin >> i;
		if (i % 2 == 1)
		{
			odd++;
		}
		sum += (1ll)*i;
	    if(i < mn && i%2 == 1)
		{
			mn = i;
		}
	}
	if (odd % 2 == 0)
	{
		cout << sum << "\n";
	}
	else
		cout << sum - mn << "\n";
}
