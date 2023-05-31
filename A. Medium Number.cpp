//link: https://codeforces.com/problemset/problem/1760/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int m=min(a,min(b,c));
        int M=max(a,max(b,c));
        if(a!= m && a!=M)
        cout<<a<<endl;
        else if(b!=m && b!=M)
        cout<<b<<endl;
        else
        cout<<c<<endl;
    }
}
