//link:  https://codeforces.com/contest/127/problem/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x1,x2,y1,y2;
    double t,s=0.0;
    cin>>n>>k;
    cin>>x1>>y1>>x2>>y2;
    if(n!=2)
    n=n-1;
    while(n--)
    {
        s=s+sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
        x1=x2;
        y1=y2;
        cin>>x2>>y2;
    }
    t=(float)s/50;
    printf("%.9lf",double(k*t));
}
