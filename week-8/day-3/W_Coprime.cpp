#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int, int>> CoPrime;
	for (int i = 1; i <= 1000; i++)
	{
		for (int j = 1; j <= 1000; j++)
		{
			if (__gcd(i, j) == 1)
			{
				CoPrime.push_back({i, j});
			}
		}
	}
	// cout << CoPrime.size() << "\n";
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ind[1001] = {0};
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			ind[x] = i + 1;
		}
		int mx = -1;
		for (auto p : CoPrime)
		{
			if (ind[p.first] && ind[p.second])
				mx = max(ind[p.first] + ind[p.second], mx);
		}
		cout << mx << "\n";
	}
}