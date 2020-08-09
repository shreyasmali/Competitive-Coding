#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int k;
		cin>>k;

		cout<<"O";
		
		int blank = k/8;
		int extra = k - 8*blank;
		int sub = 0;
		if(k<=8)
		{
			sub=1;
		}
		

		for(int a=1; a<=blank; a++)
		{
			if(a==1)
			{
				for(int i=1; i<=7; i++)
					cout<<".";
				cout<<endl;
			}
			else
			{
				for(int i=1; i<=8; i++)
					cout<<".";
				cout<<endl;
			}
		}
		for(int j = 1; j<=extra-sub; j++)
			cout<<".";
		
		if(k!=64)
		{
			for(int i= 1; i<= 8- extra; i++)
			cout<<"X";
			cout<<endl;
		}
		
		for(int i=1; i<=7 - blank; i++)
		{	
			for(int i=1; i<=8; i++)
				cout<<"X";
			cout<<endl;
			
		}

	}

	return 0;
}