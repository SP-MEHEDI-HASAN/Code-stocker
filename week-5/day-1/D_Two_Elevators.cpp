#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, c, cst1, cst2;
		cin >> a >> b >> c;
		cst1 = a - 1;
		if (c > b)
			cst2 = (c - b) + (c - 1);
		else
			cst2 = (b - c) + (c - 1);
		if (cst1 < cst2)
		{
			cout << 1 << "\n";
		}
		else if (cst1 > cst2)
		{
			cout << 2 << "\n";
		}
		else
			cout << 3 << "\n";
	}
}