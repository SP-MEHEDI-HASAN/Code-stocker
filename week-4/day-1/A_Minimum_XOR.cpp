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
		int ope = ar[0];
		for (int i = 1; i < n; i++)
		{
			ope = ope ^ ar[i];
		}
		int mn = ope;

		for (int i = 0; i < n; i++)
		{
			mn = min(mn, ope ^ ar[i]);
		}
		cout << mn << "\n";
		
	}
}