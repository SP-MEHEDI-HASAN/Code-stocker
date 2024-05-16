#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, l;
		cin >> a >> b >> l;
		set<int> ans;
		for (int i = 0; i < 30; i++)
		{
			int x = l;
			bool flag = false;
			for (int j = 0; j < i; j++)
			{
				if (x % a)
				{
					flag = true;
					break;
				}
				x /= a;
			}
			if (flag)
				break;
			while (true)
			{
				ans.insert(x);
				if (x % b)
				{
					break;
				}
				x /= b;
				ans.insert(x);
			}
		}
		cout << ans.size() << "\n";
	}
}