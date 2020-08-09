#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	
	while(test--)
	{
	     int n;
	     string s;
	     cin>>n>>s;
	     
	     map<char, int> m;
	     for(int i=0; i<n; i++)
	     {
	          m[s[i]]++;
	     }
	     int flag = 1;
	     for(auto it : m)
	     {
	          if(it.second%2==1)
	               flag = 0;
	     }
	     
	     if(flag==0)
	          cout<<"NO"<<endl;
	     else
	          cout<<"YES"<<endl;
	}
	return 0;
}
