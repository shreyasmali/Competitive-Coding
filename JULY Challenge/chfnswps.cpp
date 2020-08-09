#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	int a[n], b[n];
	map<int, int> ma;
	map<int, int> mb;

	for(int i=0; i<n; i++)
	{
		cin>>a[i]>>b[i];
		ma[a[i]]++;
		mb[b[i]]++;
	}

	auto ita = ma.begin();
	auto itb = mb.begin();

	int MIN = min(ita->first, itb->first);
	map<int,int> mdiff;

	for(; ita!=ma.end();ita++)
	{
		mdiff[ita->first] = ita->second - mb[ita->first];
	}
	for(; itb!=mb.end();itb++)
	{
		mdiff[itb->first] = ma[itb->first] - itb->second;
	}

	int sum = 0;
	for(auto it: mdiff)
	{
		sum = sum + it.second ;
	}
	if(sum!=0)
	{
		cout<<-1;
		return;
	}
	if(mdiff[MIN]==0)
	{
		int flag = 0;
		int charge = 0;
		for(auto it : mdiff)
		{
			if(it.second!=0)
			{
				if(2*MIN <= it.first)
				{
					charge = charge + 2*MIN*abs(it.second);
				}
				else
				{
					charge = charge + it.first*abs(it.second);
					flag = it.second;
				}
			}
		}
	}

}






int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		solve();

	}

	return 0;
}