#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		vector<pair<int, int>> v(s.size());
		int c1, c0;
		c1 = c0 = 0;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '0')
			{
				c0++;
			}
			else
				c1++;
			v[i] = {c1, c0};
		}
		// for (pair<int, int> p : v)
		// {
		// 	cout << p.first << " " << p.second << "\n";
		// }
		int sum = 0;
		int x = abs(c1 - c0);
		if (c1 > c0)
			c1 -= x;
		else
			c0 -= x;
		sum += x;
		int n = s.size() - 1 - x;
		int i = n;
		while (i >= 0)
		{
			if (v[i].first >= c0 && v[i].second >= c1)
			{
				break;
			}
			else if (v[i].first < c0)
			{
				x = c0 - v[i].first;
				c0 = c0 - x;
			}
			else
			{
				x = c1 - v[i].second;
				c1 = c1 - x;
			}
			sum += x;
			i -= x;
		}
		cout << sum << "\n";
	}
}