#include <bits/stdc++.h>
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
		int n, m, k;
		cin >> n >> m >> k;
		vector<bool> v(n + 1, false);
		v[k] = true;
		int cnt;
		for (int i = 0; i < m; i++)
		{
			int dis;
			cin >> dis;
			char c;
			cin >> c;
			vector<bool> t(n + 1, false);
			cnt = 0;
			for (int j = 1; j <= n; j++)
			{
				if (v[j])
				{
					if (c == '?' || c == '0')
					{
						int ne = (j + dis) % n;
						if (ne == 0)
							ne = n;
						if (!t[ne])
							cnt++;
						t[ne] = true;
					}
					if (c == '?' || c == '1')
					{
						int ne = (j + n - dis) % n;
						if (ne == 0)
							ne = n;
						if (!t[ne])
							cnt++;
						t[ne] = true;
					}
				}
			}
			v = t;
		}
		cout << cnt << "\n";
		for (int i = 1; i <= n; i++)
		{
			if (v[i])
				cout << i << " ";
		}
		cout << "\n";
	}
}