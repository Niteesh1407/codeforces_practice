//link: https://codeforces.com/problemset/problem/1829/B

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,l=0,k=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            if(v[i]==0){
                l++;
            }
            if(v[i]==1){
                l=0;
            }
            k=max(k,l);
        }
        cout<<k<<endl;
    }
}
