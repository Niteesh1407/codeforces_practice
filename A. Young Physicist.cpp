//link: https://codeforces.com/problemset/problem/69/A

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    int i;
    for(i=0;i<3;i++){
        int s=0;
        for(int j=0;j<n;j++){
            s=s+v[j][i];
        }
        if(s!=0)
        break;
    }
    if(i==3)
    cout<<"YES";
    else
    cout<<"NO";
}
