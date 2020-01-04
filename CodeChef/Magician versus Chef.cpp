// Link to problem : https://www.codechef.com/problems/MAGICHF

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	      int n,x,s,a,b;
	      cin>>n>>x>>s;
	      while(s--)
	      {
	           cin>>a>>b;
	           if(a == x)
	           {
	              x=b;
	           }
	           else if(b == x)
	           {
	              x=a;
	           }
	      }
	      cout<<x<<endl;
	}
	return 0;
}
