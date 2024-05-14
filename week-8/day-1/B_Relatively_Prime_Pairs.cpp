#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll l, r;
	cin >> l >> r;
	cout << "YES\n";
	for (ll i = l; i <= r; i += 2)
	{
		cout << i << " " << i + 1 << "\n";
	}
}