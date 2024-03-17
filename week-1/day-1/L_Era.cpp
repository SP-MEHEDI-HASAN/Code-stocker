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
		ll ar[n];
		for (ll &i : ar)
			cin >> i;
		ll i, j;
		j = 0;
		for (i = 0; i < n; i++)
		{
			if (ar[i] > i + j + 1)
				j += ar[i] - (i + 1 + j);
		}
		cout << j << "\n";
	}
}
