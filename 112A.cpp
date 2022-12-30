//link:  https://codeforces.com/problemset/problem/112/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);    //using tranform and compare methods
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    int k=s1.compare(s2);
    if(k>0)
    cout<<"1";
    else if(k<0)
    cout<<"-1";
    else
    cout<<"0";
}
