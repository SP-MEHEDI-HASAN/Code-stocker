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
		int mn = INT_MAX;
		int mx;
		for (int i = 0; i < n; i++)
		{
			if (i > 0 && i < n - 1)
				mx = max(abs(ar[i] - ar[i - 1]), abs(ar[i] - ar[i + 1]));
			else if (i == 0)
				mx = abs(ar[i] - ar[i + 1]);
			else if(i == n-1)
				mx = abs(ar[i] - ar[i - 1]);
			mn = min(mn, mx);
		}
		cout << mn << "\n";
	}
}