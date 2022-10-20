#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
vector <int> g[110];
int dp[110][10010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,k,q;
    cin >> n >> m >> k;
    for(int i=1;i<=m;i++){
        int v,u;
        cin >> u >> v;
        g[v].emplace_back(u);
    }
    for(int i=1;i<=n;i++)   g[i].emplace_back(i);
    dp[1][0]=1; //Town and day
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            for(auto x:g[j]){
                dp[j][i] = (dp[j][i] + dp[x][i - 1]) % MOD;
            }
        }
    }
    cin >> q;
    while (q--)
    {
        int d,t;
        cin >> d >> t;
        cout << dp[t][d]%MOD << '\n';
    }
    return 0;
}