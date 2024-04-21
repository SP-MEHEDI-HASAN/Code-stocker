#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, n;
		cin >> a >> b >> n;
		int x[n];
		ll sum = b - 1;
		ll ans;
		for (int i = 0; i < n; i++)
		{
			cin >> x[i];
			ans = min(x[i] + 1, a);
			sum += (ans - 1);
		}
		cout << sum+1 << "\n";
	}
}