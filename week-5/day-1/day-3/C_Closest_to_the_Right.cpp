#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	while (m--)
	{
		int k;
		cin >> k;
		auto it = lower_bound(ar, ar + n, k);
		if (it - ar < n)
			cout << it - ar + 1 << "\n";
		else
			cout << n + 1 << "\n";
	}
}