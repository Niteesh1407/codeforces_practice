//link: https://codeforces.com/problemset/problem/1840/C

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int start=0,end=0;
        long long r=0;
        while(start<n && end<n){
            end=start;
            while(end<n && v[end]<=q){
                end++;
            }
            long long x=0;
            if(end-start>=k)
            x=end-start+1-k;
            r=(long long)(r+(x*(x+1)/2));
            start=end+1;
        }
        cout<<r<<endl;
    }
}
