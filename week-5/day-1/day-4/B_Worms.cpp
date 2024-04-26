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
		if (i > 0)
		{
			ar[i] = ar[i] + ar[i - 1];
		}
	}
	// for (int i : ar)
	// 	cout << i << " ";
	int q;
	cin >> q;
	while (q--)
	{
		int k;
		cin >> k;
		int l = 0;
		int r = n - 1;
		int mid = (l + r) / 2;
		int ind = -1;
		while (l <= r)
		{
			if (ar[mid] >= k)
			{
				r = mid - 1;
				ind = mid;
			}
			else
				l = mid + 1;
			mid = (l + r) / 2;
		}
		cout << ind + 1 << "\n";
	}
}