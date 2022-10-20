#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int dp[1010][1001];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,q;
    cin >> n >> m >> q;
    while(q--){
        int a,b,c,d;
        cin >> b >> a >> d >> c;
        dp[a][b]++;
        dp[a][d+1]--;
        dp[c+1][a]--;
        dp[c+1][d+1]++;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            cout << dp[i][j]%2;
        }
        cout << '\n';
    }
    return 0;
}