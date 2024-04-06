#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int ar[n];
		for(int i = 0;i<n;i++)
		{
			cin >> ar[i];
		}
		int ans = ar[0];
		for(int i = 1;i<n;i++)
		{
			ans = ans ^ ar[i];
		}
		if(n%2 == 1)
		cout << ans << "\n";
		else if(ans == 0)
		{
			cout << ar[0] << "\n";
		}
		else
		cout << -1 << "\n";
	}
}