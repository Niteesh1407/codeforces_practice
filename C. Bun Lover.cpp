//link: https://codeforces.com/problemset/problem/1822/C

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<(long long)((n*4)+(n*(n-2))+2)<<endl;
    }
}
