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
		int nd;
		cin >> nd;
		int r = nd;
		for (int i = 0; i < n - 1; i++)
		{
			int y;
			cin >> y;
			nd = nd & y;
			r = r | y;
		}
		cout << r - nd << "\n";
	}
}