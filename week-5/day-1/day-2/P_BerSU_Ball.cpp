#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> b;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		b.push_back(x);
	}
	int m;
	cin >> m;
	vector<int> g;
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		g.push_back(x);
	}
	sort(b.begin(), b.end());
	sort(g.begin(), g.end());
	if (n < m)
	{
		swap(b, g);
		swap(n, m);
	}
	// for (int i : b)
	// 	cout << i << " ";
	// cout << "\n";
	// for (int i : g)
	// 	cout << i << " ";
	// cout << "\n";
	int cnt = 0;
	int i, j;
	i = j = 0;
	int k = 0;
	for (; i < n; i++)
	{
		j = k;
		for (; j < m; j++)
		{
			if (abs(b[i] - g[j]) <= 1)
			{
				k = j + 1;
				cnt++;
				break;
			}
			else if(b[i] > g[j])
			{
				continue;
			}
			else
			{
				break;
			}
		}
	}
	cout << cnt << "\n";
}