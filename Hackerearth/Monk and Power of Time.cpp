// https://www.hackerearth.com/practice/data-structures/queues/basics-of-queues/practice-problems/algorithm/monk-and-power-of-time-3a648bf0/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    queue<int> q1;
    queue<int> q2;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        q1.push(n);
    }
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        q2.push(n);
    }
    int count=0,e;
    while(!q1.empty())
    {
        if(q1.front()!=q2.front())
        {
            e=q1.front();
            q1.push(e);
            count++;
            q1.pop();
        }
        else if(q1.front()==q2.front())
        {
            q1.pop();
            q2.pop();
            count++;
        }
    }
    cout<<count;
    return 0;
}
