#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int maxN = 10000;
int main()
{

	int test;
	cin>>test;
	while(test--)
	{
		int n, m;
		cin>>n>>m;

		int minmn = min(m, n);
		int maxmn = max(m, n);

		int x = min(2*minmn , maxmn);
		int a[minmn][maxmn];

		for(int i = 0; i<minmn; i++)
		{
			for(int j = 0; j<maxmn; j++)
				a[i][j] = maxN;
		}


		int mex = minmn+1;
		if(m==n)
			mex = minmn;
		for(int i= 0; i<minmn; i++)
		{
			if(mex<=x)
			{
				int start = 0;
				for(int j= i+1; start!=mex; j++)
				{
					a[i][j%maxmn] = start;
					start++;
				}
				mex++;
			}
			else
			{
				int start = 0;
				for(int j = i+1; j<maxmn; j++)
				{
					a[i][j] = start;
					start++;
				}
			}
			
		}

		if(m==n)
		{
			for(int k = 0; k< m; k++)
				a[n-1][k] = maxN;
		}


		if(m>= n)
		{

			for(int i=0; i<n; i++)
			{
				for(int j=0; j<m; j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
		}
		else
		{
			int b[n][m];
			for(int i=0; i<minmn; i++)
			{
				for(int j=0; j<maxmn; j++)
				{
					b[j][i] = a[i][j];  // Transposing the array to convert M x N into N x M
				}
			}
               
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<m; j++)
				{
					cout<<b[i][j]<<" ";
				}
				cout<<endl;
			}

		}
		

	}
	return 0;
}

