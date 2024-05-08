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
		string s;
		cin >> s;
		int mn = INT_MAX;
		bool vis[29] = {0};
		for (char c = 'a'; c <= 'z'; c++)
		{
			int k = 1;
			int cnt = 0;
			for (int i = 0, j = n - 1; i < j; i++, j--)
			{
				if (s[i] == s[j])
					continue;
				else if (s[i] != c && s[j] != c)
				{
					k = 0;
					break;
				}
				else if (s[i] == c)
				{
					j++;
					cnt++;
				}
				else
				{
					i--;
					cnt++;
				}
			}
			if (k)
			{
				mn = min(mn, cnt);
				vis[c - 'a'] = true;
			}
		}
		if (mn == INT_MAX)
		{
			cout << -1 << "\n";
		}
		else
			cout << mn << "\n";
	}
}