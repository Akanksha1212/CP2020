//https://www.codechef.com/problems/SINS
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
          int m,b;
          cin>>m>>b;
          int count=__gcd(m,b)*2;
		cout<<count<<endl;
     }
     return 0;
}
