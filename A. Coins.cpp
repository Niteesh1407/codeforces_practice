//link: https://codeforces.com/problemset/problem/1814/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,n;
        cin>>n>>k;
        if(!(n&1))
        cout<<"YES"<<endl;
        else if(n%k==0)
        cout<<"YES"<<endl;
        else if((n-k)%2==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
