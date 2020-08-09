#include<bits/stdc++.h>
using namespace std;

#define lli long long int



int main()
{
	lli test;
	cin>>test;
	
	while(test--)
	{
		lli n, m, x, y;
		cin>>n>>m>>x>>y;

        lli mini;
        if(x<y)
        	mini= x;
        else 
        	mini = y;
          
		if(2*x >y)
		{
			if((n*m)%2==0)
			{
				cout<<((m*n)/2)*y;
			}
			else
			{
			     if(x<y)
			          cout<<((m*n)/2)*y + x;
			     else
				     cout<<((m*n)/2)*y + y-1;
			}
		}
		else
			cout<<m*n*x;

		
		cout<<endl;
	}






	return 0;
}