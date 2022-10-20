#include <bits/stdc++.h>
using namespace std;
int x[10010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,now=0;
    cin >> n >> m;
    for(int i=1;i<=n;i++) cin >> x[i];
    while(m--){
        int k; cin >> k;
        now+=k;
        now=now+x[now];
        if(now<=0)  now=0;
        else if(now >=n)    now=n;
        else continue;
    }
    cout << now;
    return 0;
}