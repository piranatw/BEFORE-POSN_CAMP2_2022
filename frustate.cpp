#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[100001],dp[100001];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q,n,x,b;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin  >> a[i];
        a[i]+=a[i-1];
    }
    cin >> q;
    while(q--){
        cin >> x >> b;
        cout << a[b]-a[x-1] << '\n';
    }
    return 0;
}