#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int dp[10010][10010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    long long n,r,k;
    cin >> n >> r >> k;
    dp[0][1]=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i+1 ;j++){
            dp[i][j]+=(dp[i-1][j]+dp[i-1][j-1])%k;
        }
    }
    cout << dp[n][r+1]%k;
    return 0;
}