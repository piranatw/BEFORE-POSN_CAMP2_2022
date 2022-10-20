#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1},MOD=1e6;

int vis[1010][1010],dp[1010][1010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    long long r,c,q,a,b,x,y,k;
    cin >> x >> y >> k;
    while(k--){
        cin >> a >> b;
        vis[a+1][b+1]=1;
    }
    dp[0][1]=1;
    for(int i=1;i<=x+1;i++){
        for(int j=1;j<=y+1;j++){
            if(vis[i][j])   dp[i][j]=0;
            else  dp[i][j]+=(dp[i-1][j]+dp[i][j-1])%MOD;
        }
    }
    cout << dp[x+1][y+1];
    return 0;
}