#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,mx=-1e9,x;
    cin >> n >> m;
    while(n--){
        cin >> x;
        if(x<=m)    mx=max(mx,x);
    }
    cout << mx;
    return 0;
}