#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	// int ar[] = {39, 52, 39, 26};
	// int g = 0;
	// for (int i = 0; i < 4; i++)
	// {
	// 	g = __gcd(g, ar[i]);
	// }
	// cout << g << "\n";
	int n;
	cin >> n;
	vector<ll> v(n);
	ll mx = LLONG_MIN;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		mx = max(v[i], mx);
	}
	vector<ll> tst(n);
	ll sum = 0;
	for (int i = 0; i < n; i++)
	{
		tst[i] = mx - v[i];
		sum += tst[i];
	}
	ll g = 0;
	for (int i = 0; i < n; i++)
	{
		g = __gcd(g, tst[i]);
	}
	cout << sum / g << " " << g << "\n";
}