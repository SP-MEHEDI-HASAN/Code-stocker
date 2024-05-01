#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	int x[a.size()];
	for (int i = 0; i < a.size(); i++)
	{
		cin >> x[i];
	}
	auto fun = [&](int md)
	{
		string s;
		s = a;
		for (int i = 0; i < md; i++)
		{
			s[x[i] - 1] = '*';
		}
		int i, j;
		i = j = 0;
		int cnt = 0;
		for (; i < b.size() && j < a.size();)
		{
			if (b[i] == s[j])
			{
				cnt++;
				i++;
				j++;
				continue;
			}
			else
			{
				j++;
			}
		}
		if (cnt == b.size())
			return true;
		return false;
	};
	int l = 0;
	int r = a.size();
	int mid = (l + r) / 2;
	int ans;
	while (l <= r)
	{
		if (fun(mid))
		{
			l = mid + 1;
			ans = mid;
		}
		else
			r = mid - 1;
		mid = (r + l) / 2;
	}
	cout << ans << "\n";
}