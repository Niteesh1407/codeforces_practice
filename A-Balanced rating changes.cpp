//link:  https://codeforces.com/contest/1237/problem/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
           if(s==0)
           {
               cout<<(a[i]+1)/2<<"\n";
               s=1;
           }
           else
           {
               cout<<(a[i]-1)/2<<"\n";
               s=0;
           }
        }
        else
        cout<<a[i]/2<<"\n";
    }
}
