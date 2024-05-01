#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int i = 0;
		int j = 0;
		int cst = 0;
		for (; j < s.size();)
		{
			while (s[i] == '0' && i < s.size())
				i++;
			if (j == 0)
				j = i;
			while (s[j] == '1' && j < s.size())
				j++;
			if (s[i] == '1' && s[j] == '0' && j < s.size())
			{
				cst += (j - i + 1);
				swap(s[i], s[j]);
			}
			cout << s << "\n";
		}
		cout << cst << "\n";
	}
}