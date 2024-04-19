#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int ar[m + 1];
	for (int i = 0; i <= m; i++)
	{
		cin >> ar[i];
	}
	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		int x = ar[i] ^ ar[m];
		int cnt = 0;
		while (x > 0)
		{
			if (x & 1)
				cnt++;
			x = x >> 1;
		}
		if (cnt <= k)
			ans++;
	}
	cout << ans << "\n";
}