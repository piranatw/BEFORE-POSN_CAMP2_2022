#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
int di[4]={0,1,0,-1},dj[4]={1,0,-1,0};
int n,m,cnt=0,si,sj,ei,ej,vis[1010][1010];
char a[1010][1010],ans[100010];
char ch(int k){
    if(k==0) return 'R';
    if(k==1) return 'D';
    if(k==2) return 'L';
    if(k==3) return 'U';
}
void sol(int i,int j,int state){
    if(i==ei&&j==ej){
        vis[i][j]=0;
        cnt++;
        for(int i=1;i<=state;i++)
            cout << ans[i];
        cout << endl;
//        state=0;
//        memset(ans,0,sizeof ans
                 return ;
    }
//    if(ch(i,j,oi,oj)==1)    ans[state]='D';
//    if(ch(i,j,oi,oj)==2)    ans[state]='U';
//    if(ch(i,j,oi,oj)==3)    ans[state]='R';
//    if(ch(i,j,oi,oj)==4)    ans[state]='L';
    for(int k=0;k<4;k++){
        int ii=i+di[k],jj=j+dj[k];
        if(ii < 1 || jj <1 || ii > n || jj >m)  continue;
        if(vis[ii][jj]) continue;
        if(a[ii][jj]=='#')  continue;
        vis[ii][jj]=1;
        ans[state]=ch(k);
        sol(ii,jj,state+1);
        vis[ii][jj]=0;
    }
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>> a[i][j];
            if(a[i][j]=='T')    ei=i,ej=j;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='P')    {vis[i][j]=1;  sol(i,j,1);}
        }
    }
    cout << cnt;
    return 0;
}
/*
4 5
#.#.#
P....
#.#..
#...T
*/
