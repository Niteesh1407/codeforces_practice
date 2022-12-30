//link: https://codeforces.com/problemset/problem/427/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,ut=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        if(k<0 && s==0)
        {
           ut=ut+1;
        }
        else
        {
            s=s+k;
        }
    }
    cout<<ut;
}

