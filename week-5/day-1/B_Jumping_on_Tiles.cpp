#include <bits/stdc++.h>
using namespace std;
bool cmp1(pair<char, int> a, pair<char, int> b)
{
	if (a.first > b.first)
		return true;
	else if (a.first == b.first)
	{
		if (a.second < b.second)
			return true;
	}
	return false;
}
bool cmp2(pair<char, int> a, pair<char, int> b)
{
	if (a.first < b.first)
		return true;
	else if (a.first == b.first)
	{
		if (a.second < b.second)
			return true;
	}
	return false;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		if (s[0] >= s[s.size() - 1])
		{
			vector<pair<char, int>> v;
			vector<int> x;
			for (int i = 0; i < s.size(); i++)
			{
				v.push_back({s[i], i + 1});
			}
			sort(v.begin(), v.end(), cmp1);
			for (pair<char, int> p : v)
			{
				if (p.first <= s[0] && p.first >= s[s.size() - 1])
				{
					x.push_back(p.second);
				}
				else if (p.first < s[s.size() - 1])
					break;
			}
			cout << abs(s[0] - s[s.size() - 1]) << " " << x.size() << "\n";
			for (int p : x)
			{
				// if (p != s.size())
				cout << p << " ";
			}
			cout << "\n";
		}
		else
		{
			vector<pair<char, int>> v;
			vector<int> x;
			for (int i = 0; i < s.size(); i++)
			{
				v.push_back({s[i], i + 1});
			}
			sort(v.begin(), v.end(), cmp2);
			for (pair<char, int> p : v)
			{
				if (p.first >= s[0] && p.first <= s[s.size() - 1])
					x.push_back(p.second);
				else if (p.first > s[s.size() - 1])
					break;
			}
			cout << abs(s[0] - s[s.size() - 1]) << " " << x.size() << "\n";
			for (int p : x)
			{
				// if (p != s.size())
				cout << p << " ";
			}
			cout << "\n";
		}
	}
}