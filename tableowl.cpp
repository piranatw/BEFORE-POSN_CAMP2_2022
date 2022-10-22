#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int dp[550][550];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
                cin >> dp[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==1){
                dp[i][j]+=min(dp[i-1][j],dp[i-1][j+1]);
                continue;
            }
            else if(j==m){
                dp[i][j]+=min(dp[i-1][j],dp[i-1][j-1]);
                continue;
            }
            dp[i][j]+=min({dp[i-1][j],dp[i-1][j-1],dp[i-1][j+1]});
        }
    }
//    cout << '\n';
//    for(int i=1;i<=n;i++){
//        for(int j=1;j<=m;j++){
//            cout << dp[i][j] << ' ';
//        }
//        cout << '\n';
//    }
    int mx=1e9;
    for(int i=1;i<=m;i++){
        mx=min(mx,dp[n][i]);
    }
    cout << mx;
    return 0;
}
/*
5 6
3 6 1 7 2 3
4 7 9 5 2 1
3 3 3 9 9 8
7 5 7 5 8 9
2 4 1 3 7 1
*/
