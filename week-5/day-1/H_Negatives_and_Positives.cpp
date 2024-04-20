#include <bits/stdc++.h>
#define ll long long
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
		int mns = 0;
		int ze = 0;
		int mn = INT_MAX;
		ll sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
			if (ar[i] < 0)
			{
				mns++;
				ar[i] = -1 * ar[i];
			}
			sum += ar[i];
			mn = min(mn, ar[i]);
		}

		if (mns % 2 == 1)
			sum = sum - 2*mn;
		cout << sum <<"\n";
	}
}