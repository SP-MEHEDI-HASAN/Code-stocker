#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v(100001), ar(n);
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	int mx = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		for (int j = 2; j * j <= ar[i]; j++)
		{
			if (ar[i] % j == 0)
			{
				v[j]++;
				mx = max(mx, v[j]);
				if (ar[i] / j != j)
				{
					v[ar[i] / j]++;
					mx = max(mx, v[ar[i] / j]);
				}
			}
		}
		if (ar[i] != 1)
			v[ar[i]]++;
		mx = max(mx, v[ar[i]]);
	}
	if (mx != 0)
		cout << mx << "\n";
	else
		cout << 1 << "\n";
}