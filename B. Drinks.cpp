//link: https://codeforces.com/problemset/problem/200/B

CODE:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double s=0;
    int k=n;
    while(n--){
        int a;
        cin>>a;
        s=s+a;
    }
    printf("%.12f",(s/k));
}
