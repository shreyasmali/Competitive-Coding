#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	int a[]= { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};


	lli p1=1, p2 = 1;

	for(int i=0; i<25; i++)
	{
		if(i%2==0)
			p1 = p1*a[i];
		else
			p2 = p2*a[i];
	}
	p1= p1/97;
	p2= p2*97;
	lli temp = 2000000000000000000;

	cout<<p1<<" "<<p1/temp<<endl;
	cout<<p2<<" "<<p2/temp<<endl;
	return 0;

}