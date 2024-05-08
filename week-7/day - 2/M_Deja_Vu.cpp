#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int rec[31] = {0};
		ll ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		for (int i = 0; i < m; i++)
		{
			ll qr;
			cin >> qr;
			if(++rec[qr] == 1)
			for (int j = 0; j < n; j++)
			{
				if (ar[j] % (1 << qr) == 0)
					ar[j] += (1 << (qr - 1));
			}
		}
		for (ll i : ar)
			cout << i << " ";
		cout << "\n";
	}
}