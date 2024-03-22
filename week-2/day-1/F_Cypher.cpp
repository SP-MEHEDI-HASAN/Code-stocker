#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, ans;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int ar[n];
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
		}
		for (int i = 0; i < n; i++)
		{
			int cycle;
			cin >> cycle;
			int move = 0;
			// getchar();
			string s;
			cin >> s;
			for (int j = 0; j < cycle; j++)
			{

				if (s[j] == 'D')
					move++;
				else
					move--;
			}
			// cout << move << "\n";
			if ((move >= 0 && 9 - ar[i] >= move) || (move < 0 && ar[i] >= abs(move)))
			{
				ans = ar[i] + move;
			}
			else if (9 - ar[i] < move)
			{
				ans = move - 10 + ar[i];
			}
			else
				ans = 10 + move + ar[i];
			cout << ans << " ";
		}
		cout << "\n";
	}
}