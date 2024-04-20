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
		string v;
		cin >> v;
		vector<char> lst;
		for (int i = n - 1; i >= 0; i--)
		{
			char c;
			if (v[i] != '0')
			{
				int x = v[i] - '0';
				c = x - 1 + 'a';
			}
			else
			{
				int x = (v[i - 1] - '0') + 10 * (v[i - 2] - '0');
				i = i - 2;
				c = x - 1 + 'a';
			}
			lst.push_back(c);
		}
		for (int i = lst.size() - 1; i >= 0; i--)
			cout << lst[i];
		cout << "\n";
	}
}