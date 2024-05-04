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
		int a[n], b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		int mx = INT_MIN;
		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			if (b[i] > a[i])
			{
				flag = false;
				break;
			}
			mx = max(a[i] - b[i], mx);
		}
		if(flag)
		for (int i = 0; i < n; i++)
		{
			int tst = max(a[i] - mx, 0);
			if (tst != b[i])
			{
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}