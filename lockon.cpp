#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int a,b,n,p,mx=-1e9,mn=1e9;
    cin >> n >> p;
    for(int i=1;i<=n;i++){
        cin >> a >> b;
        mx=max(mx,a);
        mn=min(mn,b);
    }
    if(mx>mn)   cout << -1<< '\n';
    
    return 0;
}