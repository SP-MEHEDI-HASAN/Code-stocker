#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		if (a.size() < b.size())
		{
			string x = a;
			a = b;
			b = x;
		}
		int mx = INT_MIN;
		int cnt = 0;
		for (int i = 0; i < a.size(); i++)
		{
			int k = i;
			for (int j = 0; j < b.size(); j++)
			{
				k = i;
				if (a[i] == b[j])
				{
					for (; j < b.size() && i < a.size(); j++, k++)
					{
						if (a[k] != b[j])
							break;
						cnt++;
					}
					mx = max(cnt, mx);
					cnt = 0;
					j--;
				}
			}
		}
		if (mx != INT_MIN)
			cout << a.size() + b.size() - 2 * mx << "\n";
		else
			cout << a.size() + b.size() << "\n";
	}
}