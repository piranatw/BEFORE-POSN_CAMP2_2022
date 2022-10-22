#include <bits/stdc++.h>
using namespace std;
int a[1001000],dp[1001000],qs[1001000],ans[1010000];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,mx=0,mn=1e9;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        mx=max(mx,num-mn);
        mn=min(mn,num);
    }
    cout << mx;
    return 0;
}
