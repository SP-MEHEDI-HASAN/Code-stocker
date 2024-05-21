#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool fun(ll a, ll b, ll g)
{
	if (g == 1)
		return false;
	if (b == 1)
		return true;
	g = __gcd(a, b);
	return fun(a, b / g, g);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll a, b;
		cin >> a >> b;
		if (fun(a, b, 0))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}