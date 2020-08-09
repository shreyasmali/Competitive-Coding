#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	lli test;
	cin>>test;
	while(test--)
	{
		lli n;
		cin>>n;
		lli a[n+1];
		for(lli i=1; i<=n;i++)
			cin>>a[i];

		if(n>62)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else
		{
			set<lli> s;
			s.clear(); 	
			for(lli i=1; i<=n; i++)
			{
				lli ortho = a[i];

				for(lli j = i; j<=n; j++)
				{
					ortho = ortho | a[j];
					set<lli> temp;

					s.insert(ortho);
				}
			}
			if(s.size()==n*(n+1)/2)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;

		}

	}



	return 0;
}