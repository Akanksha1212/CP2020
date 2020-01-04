// Link to the problem : https://www.codechef.com/problems/TSTROBOT

#include <bits/stdc++.h>
using namespace std;
int countDistinct(int arr[], int n) 
{ 
    sort(arr, arr + n);
    int res = 0; 
    for (int i = 0; i < n; i++) {
        while (i < n - 1 && arr[i] == arr[i + 1]) 
            i++; 
        res++; 
    } 
    return res; 
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	      int n,x;
	      string s;
	      cin>>n>>x;
	      cin>>s;
	      int arr[n+1];
	      arr[0]=x;
	      for(int i=0;i<n;i++)
	      {
	           if(s.at(i)=='R')
	           {
	                x=x+1;
	                arr[i+1]=x;
	           }
	           if(s.at(i)=='L')
	           {
	                x=x-1;
	               arr[i+1]=x;
	           }
	      }
	      int ans=countDistinct(arr,n+1);
	      cout<<ans<<endl;
	}
	return 0;
}
