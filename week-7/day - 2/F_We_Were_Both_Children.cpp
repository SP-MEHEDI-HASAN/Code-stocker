#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> fre(n + 1);
		for (int i = 0; i < n; i++)
		{
			ll x;
			cin >> x;
			if (x <= n)
				fre[x]++;
		}
		vector<int> v(n + 1);
		int mx = INT_MIN;
		for (int i = 1; i <= n; i++)
		{
			if (fre[i])
			{
				for (int j = i; j <= n; j += i)
				{
					v[j] += fre[i];
					mx = max(mx, v[j]);
				}
			}
		}
		if (mx != INT_MIN)
			cout << mx << "\n";
		else
			cout << 0 << "\n";
	}
}