#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

char r[1000+10][1010],c[1000+10][1010];
char a[1010][1010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q,n,m;
    cin >> q ;
    while(q--){
        memset(r,0,sizeof r);
        memset(c,0,sizeof c);
        cin >> n >> m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> a[i][j];
                r[i][tolower(a[i][j])]++;
                c[j][tolower(a[i][j])]++;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(r[i][tolower(a[i][j])]!=1||c[j][tolower(a[i][j])]!=1) continue;
                cout << a[i][j];
            }
        }
    cout << '\n';
    }
    return 0;
}
/*
3
4 3
pxe
OsN
Tte
exE
6 4
BuRg
EXit
TxrG
eKuY
OobO
yUrY
3 3
cBL
oBb
Cve



*/


