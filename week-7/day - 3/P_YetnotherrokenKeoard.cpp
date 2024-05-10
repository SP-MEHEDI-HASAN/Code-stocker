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
		stack<int> up, lo;
		for (int i = 0; i < s.size(); i++)
		{
			if (isupper(s[i]) && s[i] != 'B')
			{

				up.push(i);
			}
			else if (islower(s[i]) && s[i] != 'b')
			{

				lo.push(i);
			}
			else if (s[i] == 'B')
			{
				s[i] = '*';
				if (!up.empty())
				{
					s[up.top()] = '*';
					up.pop();
				}
			}
			else
			{
				s[i] = '*';
				if (!lo.empty())
				{
					s[lo.top()] = '*';
					lo.pop();
				}
			}
		}
		for (char c : s)
		{
			if(c == '*')
			continue;
			cout << c;
		}
		cout << "\n";
	}
}