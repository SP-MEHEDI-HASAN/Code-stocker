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
		int exp = n - 1;
		int cnt = 0;
		while (exp != 1)
		{
			exp = exp / 2;
			cnt++;
		}
		int p = (1 << cnt);
		int x = p - 1;
		while (x >= 0)
		{
			cout << x << " ";
			x--;
		}
		while (p < n)
		{
			cout << p << " ";
			p++;
		}
		cout << "\n";
	}
}