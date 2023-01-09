//link: https://codeforces.com/contest/686/problem/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,x,k=0;
   cin>>n>>x;
   for(int i=0;i<n;i++)
   {
       char ch;
       int s;
       cin>>ch>>s;
       if(ch=='+')
       {
           x=x+s;
       }
       else
       {
           if(x>=s)
           x=x-s;
           else
           k++;
       }
   }
   cout<<x<<" "<<k;
}
