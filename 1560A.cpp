//link:  https://codeforces.com/problemset/problem/1560/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],j=0;
    for(int i=1;i<=1666;i++)
    {
        if(i%3==0 || i%10==3)
        {
            continue;
        }
        else 
        {
            a[j]=i;
            j++;
        }
    }
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        cout<<endl<<a[b[i]-1];
    }
    return 0;
}
