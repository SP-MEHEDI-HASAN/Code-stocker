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
		int x;
		cin >> x;
		for (int i = 0; i < n - 1; i++)
		{
			int y;
			cin >> y;
			x = x & y;
		}
		cout << x << "\n";
	}
}