#include <bits/stdc++.h>
using namespace std;
int main()
{
	int cse = 1;
	int cnt;
	while (true)
	{
		int n, q;
		cin >> n >> q;
		if (n == 0 && q == 0)
			break;
		int ar[n];
		int v[q];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		for (int i = 0; i < q; i++)
		{
			cin >> v[i];
		}
		sort(ar, ar + n);
		cnt = 0;
		for (int k : v)
		{
			if (cnt == 0)
			{
				cout << "CASE# " << cse << ":\n";
				cnt++;
			}
			int l, r;
			l = 0;
			r = n - 1;
			int ind = -1;
			int mid = (r + l) / 2;
			while (l <= r)
			{
				if (ar[mid] == k)
				{
					ind = mid;
					r = mid - 1;
				}
				else if (ar[mid] > k)
				{
					r = mid - 1;
				}
				else
					l = mid + 1;
				mid = (l + r) / 2;
			}

			if (ind != -1)
			{
				cout << k << " found at " << ind + 1 << "\n";
			}
			else
				cout << k << " not found \n";
		}
		cse++;
	}
}