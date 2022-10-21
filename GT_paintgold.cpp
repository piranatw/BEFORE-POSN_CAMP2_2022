#include <bits/stdc++.h>
using namespace std;
int a[10010][1001];
int R[1010],C[1010];
int main(){
    int n,m,k;
    cin >> n >> m >> k;
    char opr;
    while(k--){
        cin >> opr;
        if(opr=='R'){
            int x;cin >> x;
            R[x]++;
            R[x]%=2;
        }
        if(opr=='C'){
            int x;cin >> x;
            C[x]++;
            C[x]%=2;
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]=R[i]+C[j];
            a[i][j]%=2;
            if(a[i][j]) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
