#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, a, b, p, q;
	cin >> n >> a >> b >> p >> q;
	ll s1 = n / a;
	ll s2 = n / b;
	ll cmn = (a / __gcd(a, b)) * b;
	cmn = n/cmn;
	s1 -= cmn;
	s2 -= cmn;
	ll mx = max(q, p);
	cout << s1 * p + s2 * q + cmn * mx << "\n";
}