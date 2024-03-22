#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int sz;
		cin >> sz;
		string s;
		cin >> s;
		int cnt = 0;
		for(char c:s)
		{
			if(c == '(')
			{
				cnt++;
			}
			else if(cnt > 0 && c == ')')
			{
				cnt--;
			}
		}
		cout << cnt << "\n";
	}
}