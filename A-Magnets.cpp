//link:  https://codeforces.com/contest/344/problem/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="",k="";
    int n,count=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s!=k)
        {
            count++;
            k=s;
        }
    }
    cout<<count;
}
