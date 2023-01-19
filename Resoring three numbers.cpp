//link: https://codeforces.com/problemset/problem/1154/A

CODE:

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x[4];
	for(int i=0;i<4;i++)
	cin>>x[i];
	sort(x,x+4);
	int big=x[3];
	for(int i=0;i<3;i++)
	cout<<big-x[i]<<" ";
	return 0;
}
