#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	map<char, int> mp;

	while (t--)
	{
		mp['T'] = 1;
		mp['i'] = 1;
		mp['m'] = 1;
		mp['u'] = 1;
		mp['r'] = 1;
		int sz;
		cin >> sz;
		string s;
		cin >> s;
		if (sz == 5)
		{
			bool flag = true;
			int count = 0;
			for (char c : s)
			{
				if (mp[c] == 1)
				{
					mp[c]++;
					count++;
					continue;
				}
				else
				{
					flag = false;
					break;
				}
			}
			if (count == 5 && flag)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else
			cout << "NO\n";
	}
}