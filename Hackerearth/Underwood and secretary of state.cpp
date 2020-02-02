// https://www.hackerearth.com/problem/algorithm/underwood-and-secretary-of-state-64013221/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> arr;
    int input;
    for(int i=0;i<n;i++)
    {
        cin>>input;
        arr.push_back(input);
    }
    int q=0;
    for(auto i=arr.begin();i!=arr.end();++i)
    {
        if(*i<=k)
        {
           q++; 
        }
        else if(*i>k)
        break;
    }
    int l=0;
    for(auto i=arr.end()-1;i>=arr.begin();--i)
    {
        if(*i<=k)
        {
            l++;
        }
        else if(*i>k)
        break;
    }
    cout<<(n-(l+q));
    return 0;
}
