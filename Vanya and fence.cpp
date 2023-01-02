//link: https://codeforces.com/contest/677/problem/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        s=s+1;
        else
        s=s+2;
    }
    cout<<s;
}
