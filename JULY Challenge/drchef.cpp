#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, x;
	cin>>n>>x;

	int a[n+1];
	for(int i=1; i<=n; i++)
		cin>>a[i];

	int cure = x;
	int rem = a[1];
	int count = 0;
	while(rem>0)
	{
		rem = 2*(rem - cure);

		if(rem>a[1])
			rem = a[1];
		// cout<<"cure: "<<cure<<endl;
		// cout<<"rem:  "<<rem<<endl;
		cure = cure*2;
		count++;
	}
	// if(count!=1)
	// 	count--;
	cout<<count+n-1<<endl;
	
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