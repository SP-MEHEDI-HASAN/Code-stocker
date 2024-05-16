#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool fun(ll tst)
{
	for (ll i = 2; i * i <= tst; i++)
	{
		if (tst % i == 0)
			return false;
	}
	return true;
}
int main()
{
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		if (n > 2)
			cout << 2 << "\n";
		else
			cout << 1 << "\n";
	}
	else if (n > 3)
	{
		if (fun(n))
		{
			cout << 1 << "\n";
		}
		else if (fun(n - 2))
			cout << 2 << "\n";
		else
			cout << 3 << "\n";
	}
	else
		cout << 1 << "\n";
}