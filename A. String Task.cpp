//link: https://codeforces.com/problemset/problem/118/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='y')
        continue;
        if(s[i]>'A' && s[i]<='Z'){
            cout<<"."<<(char)(s[i]+32);
        }
        if(s[i]>'a' && s[i]<='z'){
            cout<<"."<<s[i];
        }
    }
}
