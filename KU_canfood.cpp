#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,a,b,cnt=0; cin >> n;
    while(n--){
        cin >> a >> b;
        if(a>750||a<100||b<80) continue;
        else    cnt++;
    }
    cout << cnt;
    return 0;
}