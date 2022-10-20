#include <bits/stdc++.h>
using namespace std;
int a[1001],dp[101000];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,q;
    cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> dp[i];
        dp[i]+=dp[i-1];
    }
    int mn=1e9;
    for(int i=n-1;i>=1;i--)    dp[i]=min(dp[i],dp[i+1]);
    while(q--){
        int k;  cin >> k;
        cout << upper_bound(dp+1,dp+n+1,k)-dp-1 <<'\n';
    }
    return 0;
}