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
		set<int> s;
		map<int, int> mp;
		for (int i = 0; i < (n*(n-1))/2; i++)
		{
			int x;
			cin >> x;
			mp[x]++;
			s.insert(x);
		}
		int x = n - 1;
		vector<int> v;
		for (auto it = s.begin(); it != s.end(); it++)
		{
			while (mp[*it] != 0)
			{
				mp[*it] = mp[*it] - x;
				v.push_back(*it);
				x--;
			}
		}
		v.push_back(v.back());
		for (int i : v)
			cout << i << " ";
		cout << "\n";
	}
}