// Link to the problem https://www.codechef.com/problems/ISITCAKE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	      int arr[10][10];
	      int count=0;
	      for(int i=0;i<10;i++)
	      {
	           for(int j=0;j<10;j++)
	           {
	                cin>>arr[i][j];
	                if(arr[i][j]<=30)
	                count++;
	           }
	      }
	      if(count>=60)
	      cout<<"yes"<<endl;
	      else
	      cout<<"no"<<endl;
	}
	return 0;
}
