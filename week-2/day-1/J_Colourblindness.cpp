#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int sz;
		cin >> sz;
		string x, y;
		cin >> x >> y;
		bool flag = true;
		for (int i = 0; i < x.size(); i++)
		{
			if ((x[i] == 'B' && y[i] == 'R') || (x[i] == 'G' && y[i] == 'R') || (x[i] == 'R' && y[i] != 'R'))
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << "YES\n";
		}
		else
			cout << "NO\n";
	}
}