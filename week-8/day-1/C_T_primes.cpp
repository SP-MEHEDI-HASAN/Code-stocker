#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<bool> v(1000001, true);
	v[1] = false;
	for (int i = 2; i * i <= 1000001; i++)
	{
		if (v[i])
		{
			for (int j = i + i; j <= 1000001; j += i)
			{
				v[j] = false;
			}
		}
	}
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll x;
		x = sqrt(n);
		if (x * x == n && v[x])
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
}