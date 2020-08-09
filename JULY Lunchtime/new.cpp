#include<bits/stdc++.h>
using namespace std;

#define lli long long int

vector<lli> bin(lli x)
{
	lli i =0;
	vector<lli> a;
	while(x>0)
	{
		a.push_back(x%2);
		x = x/2;
		i++;
	}
	return a;
}

lli convert(vector<lli> v)
{
	lli i=1;
	lli ans = 0;
	for(auto it: v)
	{
		ans = ans + i*(it);
		i = i*2;
	}

	return ans;
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	lli test;
	cin>>test;
	while(test--)
	{
		lli n;
		cin>>n;
		lli a[n];
		vector<lli> v[n];

		for(lli i=0; i<n; i++)
		{
			cin>>a[i];
			v[i] = bin(a[i]);
		}

		lli maxi = 0;
		for(lli i=0; i<n; i++)
		{
			for(lli j=0; j<n; j++)
			{
				vector<lli> temp1 = v[i];
				for(auto it : v[j])
					temp1.push_back(it);

				vector<lli> temp2 = v[j];
				for(auto it : v[i])
					temp2.push_back(it);

				lli x = convert(temp1);
				lli y = convert(temp2);

				maxi = max(maxi, x-y);
			}
		}

		cout<<maxi<<endl;


	}

	return 0;
}