//link:  https://codeforces.com/contest/231/problem/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)>1)
        count++;
    }
    cout<<count;
}
