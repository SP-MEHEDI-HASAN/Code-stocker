#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	auto valid = [&](int md)
	{
		int pl_a = a / md;
		int pl_b = b / md;
		if (pl_a + pl_b >= n)
		{
			return true;
		}

		return false;
	};
	if (n > 2)
	{
		int l = 1;
		int r = 100;
		int mid = (r + l) / 2;
		int ans;
		while (l <= r)
		{
			if (valid(mid))
			{
				l = mid + 1;
				ans = mid;
			}
			else
				r = mid - 1;
			mid = (r + l) / 2;
		}
		cout << ans << "\n";
	}
	else
		cout << min(a, b) << "\n";
}