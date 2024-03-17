#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		map<string, int> mp;
		int n;
		cin >> n;
		vector<string> s[3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < n; j++)
			{
				string cs;
				cin >> cs;
				s[i].push_back(cs);
				mp[cs]++;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			int sum = 0;
			for (string ss : s[i])
			{
				if (mp[ss] == 1)
					sum += 3;
				else
				{
					sum += (3-mp[ss]);
				}
			}
			cout << sum << " ";
		}
		cout << "\n";
	}
}
