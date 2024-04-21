#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b, n, s;
		cin >> a >> b >> n >> s;
		int nd = s / n;
		if (a < nd)
		{
			s = s - a * n;
			if (s <= b)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else
		{
			s = s % n;
			if (s <= b)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}