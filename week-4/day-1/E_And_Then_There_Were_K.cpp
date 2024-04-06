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
		int rng = 100;
		int x = n;
		while (rng--)
		{
			x = x & (n - 1);
			n--;
			if (x == 0)
				break;
		}
		cout << n << "\n";
	}
}