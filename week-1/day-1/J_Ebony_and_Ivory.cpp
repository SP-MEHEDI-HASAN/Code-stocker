#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if(c%a == 0 || c%b == 0)
	cout << "Yes\n";
	else
	{
		bool flag = true;
		int i = 1;
		while(a*i < c)
		{
			if((c-(a*i))%b == 0)
			{
				cout <<"Yes\n";
				flag = false;
				break;
			}
			i++;
		}
		if(flag)
		cout << "No\n";
	}
}
