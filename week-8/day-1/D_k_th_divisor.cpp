#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, k;
	cin >> n >> k;
	vector<ll> div;
	for (ll i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			div.push_back(i);
			if (n / i != i)
				div.push_back(n / i);
		}
	}
	if (div.size() < k)
	{
		cout << -1 << "\n";
	}
	else
	{
		sort(div.begin(), div.end());
		cout << div[k - 1] << "\n";
	}
}