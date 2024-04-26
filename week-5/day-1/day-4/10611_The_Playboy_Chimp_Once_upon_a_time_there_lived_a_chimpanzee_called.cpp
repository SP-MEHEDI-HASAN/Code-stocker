#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	int q;
	cin >> q;
	while (q--)
	{
		int k;
		cin >> k;
		int l, r;
		l = 0;
		r = n - 1;
		int l_b = -1;
		int mid = (l + r) / 2;
		while (l <= r)
		{
			if (ar[mid] >= k)
			{
				l_b = mid;
				r = mid - 1;
			}
			else
				l = mid + 1;
			mid = (l + r) / 2;
		}

		l = 0;
		r = n - 1;
		int u_b = -1;
		mid = (l + r) / 2;
		while (l <= r)
		{
			if (ar[mid] <= k)
			{
				u_b = mid;
				l = mid + 1;
			}
			else
				r = mid - 1;
			mid = (r + l) / 2;
		}
		if (l_b == 0)
		{
			cout << "X ";
		}
		else if (l_b == -1)
		{
			cout << ar[n - 1] << " ";
		}
		else
			cout << ar[l_b - 1] << " ";
		if (u_b == n - 1)
			cout << "X\n";
		else if (u_b == -1)
		{
			cout << ar[0] << "\n";
		}
		else
			cout << ar[u_b + 1] << "\n";
	}
}