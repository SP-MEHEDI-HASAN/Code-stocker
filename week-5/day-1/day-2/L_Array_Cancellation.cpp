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
		ll ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		ll sum = 0;
		// cout << sum << "\n";
		int i = 0;
		while (i<n)
		{
			if (ar[i] > 0)
			{
				sum = ar[i];
				i++;
				break;
			}
			i++;
		}
		for (; i < n; i++)
		{
			if (sum + ar[i] < 0)
			{
				sum = 0;
				continue;
			}
			sum = sum + ar[i];
		}
		cout <<sum  << "\n";
	}
}