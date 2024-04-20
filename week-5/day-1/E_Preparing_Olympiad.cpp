#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, l, r, x;
	cin >> n >> l >> r >> x;
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	int sz = 1 << n;
	int cnt = 0;
	int mn,mx;
	for (int i = 1; i <= sz - 1; i++)
	{
		 mn = INT_MAX;
		 mx = INT_MIN;
		int j = 0;
		int k = i;
		int sum = 0;
		while (k > 0)
		{
			if ((k & 1) == 1)
			{
				sum += ar[j];
				mn = min(mn, ar[j]);
				mx = max(mx, ar[j]);
			}
			k = k >> 1;
			j++;
		}
		if (sum >= l && sum <= r && mx - mn >= x)
		{
			cnt++;
			// cout << sum << "\n";
		}
	}
	cout << cnt << "\n";
}