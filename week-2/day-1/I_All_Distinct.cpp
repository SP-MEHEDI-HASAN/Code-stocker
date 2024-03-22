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
		int ar[n];
		int rec[10001] = {0};
		int cnt = 0;
		int tar = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> ar[i];
			rec[ar[i]]++;
			if (rec[ar[i]] > 1)
			{
				rec[ar[i]]--;
				cnt++;
			}
			if (cnt == 2)
			{
				tar++;
				cnt = 0;
			}
		}
		if(cnt == 1)
		{
			tar++;
		}
		cout << n - tar * 2 << "\n";
	}
}