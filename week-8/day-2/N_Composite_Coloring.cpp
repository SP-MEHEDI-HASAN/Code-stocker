#include <bits/stdc++.h>
using namespace std;
int main()
{
	//  1  2  3  4  5   6   7   8   9   10  11
	int ar[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
	int t;
	cin >> t;
	while (t--)
	{
		map<int, int> mp1;
		map<int, int> mp2;
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		int clr = 0;
		vector<int> ind;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				if (v[i] % ar[j] == 0)
				{
					if (++mp1[ar[j]] == 1)
					{
						clr++;
						ind.push_back(ar[j]);
						mp2[ar[j]] = ind.size();
					}
					v[i] = mp2[ar[j]];
					break;
				}
			}
		}
		cout << clr << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << "\n";
	}
}