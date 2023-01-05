//link:  https://codeforces.com/contest/236/problem/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t="";
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        char ch=s.at(i);
        if(t.find(ch)>100)
        t=t+ch;
    }
    if(t.length()%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
}
