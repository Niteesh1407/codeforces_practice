//link:  https://codeforces.com/contest/732/problem/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i=1;
    cin>>k>>r;
    int n=k;
    while(k%10!=0 && k%10!=r)
    {
        k=n*i;
        i++;
    }
    if(i==1)
    cout<<i;
    else
    cout<<i-1;
}
