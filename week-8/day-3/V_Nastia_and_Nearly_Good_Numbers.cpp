#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while (t--)
	{
		ll a, b;
		cin >> a >> b;
		if (b == 1)
			cout << "NO\n";
		else
		{
			cout << "YES\n";
			cout << a << " " << a * b << " " << a * (b + 1) << "\n";
		}
	}
}