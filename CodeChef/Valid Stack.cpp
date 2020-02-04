//https://www.codechef.com/problems/VALIDSTK
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base:: sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ll long long
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          int arr[n];
          for(int i=0;i<n;i++)
          {
               cin>>arr[i];
          }
          int p=0,pp=0,c;
          for(int i=0;i<n;i++)
          {
               if(arr[i]==1)
               p++;
               else if(arr[i]==0)
               pp++;
               if(pp>p)
               {
                  c=0;
                  break;
               }
               else
               {
                    c=1;
                    continue;
               }
          }
          if(c==0)
          cout<<"Invalid"<<endl;
          else
          cout<<"Valid"<<endl;
     }
     return 0;
}
