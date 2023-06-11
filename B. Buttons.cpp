//link: https://codeforces.com/problemset/problem/268/B

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    for(int i=1;i<n;i++){
        s=s+(i*(n-i));
    }
    s=s+n;
    cout<<s;
}
