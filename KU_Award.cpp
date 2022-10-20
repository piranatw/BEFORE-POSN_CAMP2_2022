#include <bits/stdc++.h>
using namespace std;
int a[10010],mark[1001],z[1001],b[1001],dp[10010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n; cin >> n;
    for(int i=1;i<=n*2;i++){
        cin >> a[i];
        mark[a[i]]=1;
        if(a[i]==0) z[i]+=z[i-1];
    }
    for(int i=1;i<=n*2;i++){
        dp[i]=dp[i-1]+a[i];
    }
    int cnt=0;
    for(int i=2*n;i>=1;i--){
        if(!mark[i])    cnt++,b[cnt]=b[cnt-1]+i;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int sum=dp[i]+dp[2*n]-dp[n+i-1];
        int zero=z[i]+z[2*n]-z[n+i-1];
        ans=max(ans,sum+b[zero]);
    }
    cout << ans;
    return 0;
}