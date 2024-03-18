#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	for(int &i :a)
	cin >> i;
	for(int &i:b)
	cin >> i;
	int u = 0,d = 0,ans = 0;
	while(d < m)
	{
		while(u < n &&a[u] < b[d] )
		{
			ans++;
			u++;
		}
		d++;
		cout << ans << " ";
	}
}