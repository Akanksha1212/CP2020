// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/set-numbers-bea74f5a/
#include <bits/stdc++.h> 
using namespace std; 
 
int countBits(int n)
{
    return (int)log2(n)+1;
}
unsigned int countSetBits(unsigned int n) 
{ 
    unsigned int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int count=countBits(n);
	    int c=countSetBits(n);
	    int ans=0;
	    for(int i=0;i<count-1;i++)
	    {
	        ans=ans+1*pow(2,i);
	    }
	    if(c==count)
	    cout<<n<<endl;
	    else
	    cout <<ans<<endl;
    }
	return 0; 
} 
