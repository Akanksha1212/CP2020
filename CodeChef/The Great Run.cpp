// Link to the problem https://www.codechef.com/problems/PROC18A

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	      int n,k;
	      cin>>n>>k;
	      int arr[n];
	      for(int i=0;i<n;i++)
	      {
	           cin>>arr[i];
	      }
	      vector<int> arrmax;
	      for(int i=0;i<n;i++)
	      {
	           int sum=0;
	           for(int j=i;j<i+k;j++)
	           {
	                if(i+k>n)
	                break;
	                else
	                sum=sum+arr[j];
	           }
	           arrmax.push_back(sum);
	      }
	      cout<<*max_element(arrmax.begin(), arrmax.end())<<endl;
	}
	return 0;
}
