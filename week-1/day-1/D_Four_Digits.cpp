#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = n;
	vector<int> s;
	int t = 4;
	while(t--)
	{
		s.push_back(x%10);
		x = x/10;
	}
	for(int i = 3;i>=0;i--)
	{
		cout << s[i];
	}
	cout << "\n";
}
