#include <bits/stdc++.h>
#define LBS(i) i&-i
#define all(a) a.begin(),a.end()
#define fi first
#define nd second
#define pii(a,b) pair<a,b>
using namespace std;
using ll = long long;
const int N=1e6+10,M=1e6+10;
const int di[8]={1,-1,0,0,-1,1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
struct A{
    int i,j;
}now;
int n,a[30][30],si,sj,mx=-2e9;
queue<A>qu;
void dfs(int i,int j){
    mx=max(mx,a[i][j]);
    for(int k=0;k<4;k++){
        int ii=i+di[k],jj=j+dj[k];
        if(ii < 1 || ii > n || jj < 1 || jj > n) continue;
        if(a[i][j]>=a[ii][jj]) continue;
        if(a[ii][jj]==100) continue;
        dfs(ii,jj);
    }
    return ;
}
void sol(){
    cin >> n >> sj >> si;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    dfs(si,sj);
    cout << mx << '\n';
    return ;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int q=1;
    // cin >> q;
    while(q--){
        sol();
    }
    return 0;
}