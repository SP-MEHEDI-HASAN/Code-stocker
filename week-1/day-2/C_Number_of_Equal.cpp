#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int ar[n], br[m];
	for (int &i : ar)
		cin >> i;
	for (int &i : br)
	{
		cin >> i;
	}
	ll x, y, sum;
	x = y = sum = 0;
	int cur = ar[x];
	while (x < n)
	{
		int cn1 = 0, cn2 = 0;
		cur = ar[x];
		while (ar[x] == cur && x < n)
		{
			cn1++;
			x++;
		}
		while (br[y] < cur && y < m)
		{
			y++;
		}
		while (br[y] == cur && y < m)
		{
			cn2++;
			y++;
		}
		sum += (1LL * cn1 * cn2);
	}
	cout << sum << "\n";
}