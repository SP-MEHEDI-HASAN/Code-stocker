#include <bits/stdc++.h>
// has exactly K unique characters
using namespace std;
int main()
{
	string s;
	int k;
	cin >> s >> k;
	int fre[26] = {0};
	int i, j;
	i = j = 0;
	int cnt = 0;
	int sz = 0;
	int mx = INT_MIN;
	while (j < s.size())
	{

		if (++fre[s[j] - 'a'] == 1)
			cnt++;
		sz++;
		if (cnt == k)
			mx = max(mx, sz);
		else
		{
			while (cnt > k)
			{
				if (--fre[s[i] - 'a'] == 0)
				{
					cnt--;
				}
				i++;
				sz--;
			}
		}
		j++;
	}
	cout << mx << "\n";
}