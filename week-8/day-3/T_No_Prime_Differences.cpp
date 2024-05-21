#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<bool> vis(1001, true);
	for (int i = 2; i * i <= 1001; i++)
	{
		if (vis[i])
		{
			for (int j = i + i; j <= 1000; j += i)
				vis[j] = false;
		}
	}
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, w;
		cin >> n >> m;
		int p = m * n;
		w = 0;
		while (p != 0)
		{
			p = p / 10;
			w++;
		}
		int ar[n][m], nar[n][m];
		int x = 1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				ar[i][j] = x;
				x++;
			}
		}
		if (vis[m])
		{
			int x = 0;
			for (int i = 1; i < n; i += 2)
			{
				for (int j = 0; j < m; j++)
				{
					nar[x][j] = ar[i][j];
				}
				x++;
			}
			for (int i = 0; i < n; i += 2)
			{
				for (int j = 0; j < m; j++)
				{
					nar[x][j] = ar[i][j];
				}
				x++;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					cout << setw(w);
					cout << nar[i][j] << " ";
				}
				cout << "\n";
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < m; j++)
				{
					cout << setw(w);
					cout << ar[i][j] << " ";
				}
				cout << "\n";
			}
		}
	}
}