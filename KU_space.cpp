#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,k,sum=0,ans=0,s;
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++){
        cin >> s;
        sum+=s;
        if(sum >=k) sum-=k;
        else if(sum >=m) sum=0,ans++;
        else ans=-1e9;
    }
    ans=max(ans,-1);
    cout << ans << '\n';
    return 0;
}