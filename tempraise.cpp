#include <bits/stdc++.h>
using namespace std;
int a[1001][100],di[4]={1,-1,0,0},dj[4]={0,0,1,-1},vis[100][100],mx=-1e9,n;
void sol(int x,int y){
    mx=max(a[x][y],mx);
    for(int i=0;i<4;i++){
        int ii=di[i]+x,jj=dj[i]+y;
        if(ii<1||jj<1||ii>n||jj>n)  continue;
        if(a[ii][jj]==100||a[x][y]>=a[ii][jj]) continue;
        sol(ii,jj);
    }
    return;
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int si,sj;
    cin >> n >> sj >> si;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    sol(si,sj);
    cout << mx;
    return 0;
}
