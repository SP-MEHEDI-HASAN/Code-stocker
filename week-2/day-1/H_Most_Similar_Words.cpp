#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int str_num;
		cin >> str_num;

		int str_sz;
		cin >> str_sz;

		string s[str_num];
		vector<int> v(str_num);

		for (int i = 0; i < str_num; i++)
		{
			cin >> s[i];
		}
		int mn = INT_MAX;
		for (int i = 0; i < str_num; i++)
		{

			for (int j = i + 1; j < str_num; j++)
			{
				int sum = 0;
				for (int k = 0; k < str_sz; k++)
				{
					sum += abs(s[i][k] - s[j][k]);
				}
				mn = min(mn, sum);
			}
		}
		cout << mn << "\n";
	}
}
