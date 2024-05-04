#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> ar;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			ar.push_back(x);
		}
		sort(ar.begin(), ar.end());
		bool vis[n + 1];
		memset(vis, false, sizeof(vis));
		int i = 1;
		int j = 0;
		int cnt = 0;
		for (; i <= n; i++)
		{
			if (!vis[i])
			{
				if (i == ar[j])
				{
					vis[i] = true;
					j++;
					continue;
				}
				while (ar[j] <= n && !vis[ar[j]] && j < n)
				{
					vis[ar[j]] = true;
					j++;
				}
				if (j == n)
				{
					i = n;
					continue;
				}
				else if (ar[j] % 2 == 1 && ar[j] / 2 >= i && j < n)
				{
					cnt++;
					vis[i] = true;
					j++;
					continue;
				}
				else if (j < n && ar[j] / 2 - 1 >= i)
				{
					cnt++;
					vis[i] = true;
					j++;
					continue;
				}
			}
			else
				continue;
			break;
		}
		if (i == n+1)
			cout << cnt << "\n";
		else
			cout << -1 << "\n";
		// for (int i = 1; i <= n; i++)
		// {
		// 	cout << vis[i] << " ";
		// }
		// cout << "\n";
	}
}