#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    double n,w,l,ans=0;
    cin >> n;
    while(n--){
        cin >> l >> w;
        int k=l*0.75;
        if(w<=k) ans+=5;
        else ans+=3;
    }
    cout << ans;
    return 0;
}