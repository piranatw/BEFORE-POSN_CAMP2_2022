#include <bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i][j]=a[i-1][j]+a[i][j-1]-a[i-1][j-1]+a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    int q;
    cin >> q;
    
    while(q--){
        int b,c,d,e;
        cin >> b >> c >> d >> e;
        b++,c++,d++,e++;
        cout << a[e][d]-a[c-1][d]-a[c][d-1]+a[c+1][+1] << '\n';
    }
    return 0;
}