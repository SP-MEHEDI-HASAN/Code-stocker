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
		int ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		bool flag = false;
		for (int i = 1; i < n - 1; i++)
		{
			if (ar[i] > ar[i - 1] && ar[i] > ar[i + 1])
			{
				flag = true;
				cout << "YES\n";
				cout << i << " " << i + 1 << " " << i + 2 << "\n";
				break;
			}
		}
		if (!flag)
			cout << "NO\n";
	}
}