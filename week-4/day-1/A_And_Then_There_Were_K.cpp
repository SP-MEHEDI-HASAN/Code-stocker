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
		int last = 0;
		for(int i = 0;i<31;i++)
		{
			if((n >> i)&1 == 1)
			last = i;
		}
		cout << (1 << last)-1 << "\n";
	}
}