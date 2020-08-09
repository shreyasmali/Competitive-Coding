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
				auto findit = find(vpos.begin(), vpos.end(), make_pair(h[b], -1*b));	
				findit++;

				auto itr = upper_bound(findit, vpos.end(), make_pair(h[b], -1*b));
				cout<<"current value: "<<-h[b]<<" , "<<b<<endl;
				cout<<"lower bound : "<<itr->first<<" , "<<itr->second<<endl;
				cout<<"c : "<<c<<endl;
				if(itr==vpos.end())
					itr--;
				if(-1*itr->second < c)
					cout<<-1<<endl;
				else
				{
					cout<<s[c]-s[b-1]<<endl;
				}
			}
			else
			{
				auto findit = find(vneg.begin(), vneg.end(), make_pair(-1*h[c], -1*c));	
				findit++;
				auto itr = upper_bound(findit, vneg.end(), make_pair(-1*h[c], -1*c));
				cout<<"current value: "<<-h[c]<<" , "<<c<<endl;
				cout<<"lower bound : "<<itr->first<<" , "<<itr->second<<endl;
				cout<<"b : "<<b<<endl;
				if(itr==vneg.end())
					itr--;
				if(-1*itr->second < b)
					cout<<-1<<endl;
				else
				{
					cout<<s[b]-s[c-1]<<endl;
				}
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