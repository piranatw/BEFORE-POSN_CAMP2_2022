#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

char a[1010][1010];
int dp[1010][1010];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,mx=-1e9;
    cin >> n >> m;
//    dp[0][1]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char opr;
            cin >> opr;
            if(opr=='#')    dp[i][j]=0;
            else{
                dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
            }
            mx=max(mx,dp[i][j]);
        }
    }
    cout << mx;
    return 0;
}
