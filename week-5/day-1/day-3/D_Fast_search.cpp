#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	sort(ar.begin(), ar.end());
	int t;
	cin >> t;
	while (t--)
	{
		int l, r;
		cin >> l >> r;
		auto it1 = lower_bound(ar.begin(), ar.end(), l);
		auto it2 = upper_bound(ar.begin(), ar.end(), r);
		cout << it2 - it1 << " ";
	}
}