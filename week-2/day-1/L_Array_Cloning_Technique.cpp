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
		map<int, int> mp;
		int mx = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
			mx = max(mx, ++mp[ar[i]]);
		}
		if (mx == n)
		{
			cout << 0 << "\n";
		}
		else
		{
			int a = n - mx;
			int count = 0;
			while (a > mx)
			{
				a = a - mx;
				count = count + mx + 1;
				mx = mx * 2;
			}
			if(a <= mx)
			{
				count = count + a+1;
			}
			cout << count << "\n";
		}
	}
}