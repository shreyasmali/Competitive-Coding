#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, q;
	cin>>n>>q;

	int h[n+1];
	vector<pair<int, int>> vpos;
	vector<pair<int, int>> vneg;
	for(int i=1; i<=n; i++)
	{
		cin>>h[i];
		vpos.push_back({h[i], -1*i});

		vneg.push_back({-1*h[i], -1*i});
	}
	int a[n+1];
	int s[n+1] = {0};
	s[0]=0;
	for(int i=1; i<=n; i++)
	{
		cin>>a[i];
		s[i] = s[i-1] + a[i];
	}

	for(int j=1; j<=q; j++)
	{
		int value, b, c;
		cin>>value>>b>>c;
		if(value==2)
		{
			if(b<=c)
			{	
				int ans = a[b];
				for(int i= b+1; i<=c; i++)
				{
					if(a[i] < a[i-1])
					{
						if(a[i] > a[c])
							ans = ans + a[i];
					}

				}
			}
			else
			{
			}
		}
		else if(value==1)
		{
			int old = a[b];
			a[b] = c;
			for(int i=b; i<=n; i++)
			{
				s[i] = s[i] + c - old;
			}
		}
	}
}






int main()
{
	solve();

	return 0;
}