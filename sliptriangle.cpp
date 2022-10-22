#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int dp[1010][1010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin >> dp[i][j];
        }
    }
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=i;j++){
            dp[i][j]+=max(dp[i+1][j],dp[i+1][j+1]);
        }
    }
    cout << dp[1][1];
    return 0;
}
/*
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
*/
