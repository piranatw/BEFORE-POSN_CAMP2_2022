#include <bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,mx=-1e9;
    cin >> n >> m;
    int mn=1e9;
    while(n--){
        for(int i=1;i<=m;i++)   cin >> a[i];
        mx=-1e9;
        for(int i=m;i>=1;i--){
            mx=max(a[i]-a[i-1],mx);
        }
        mn=min(mx,mn);
    }
    cout << mn;
    return 0;
}