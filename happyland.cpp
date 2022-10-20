#include <bits/stdc++.h>
using namespace std;
double n,m,a[5][5],vis[5][5],mn=1e9;
int di[8]={1,-1,0,0,-1,1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
void dfs(int i,int j,double ans,int state){
    ans+=a[i][j];
    double sum=a[i][j]*0.1;
    vis[i][j]=1;
    if(state==n*m){
        vis[i][j]=0;
        mn=min(mn,ans);
        return;
    }
    for(int k=0;k<8;k++){
        int ii=di[k]+i,jj=dj[k]+j;
        if(ii<1||jj<1||ii>n||jj>m)  continue;
        a[ii][jj]+=sum;
    }
    for(int k=1;k<=n;k++){
        for(int l=1;l<=m;l++){
            if(vis[k][l]) continue;
            dfs(k,l,ans,state+1);
        }
    }
    vis[i][j]=0;
    for(int k=0;k<8;k++){
        int ii=di[k]+i,jj=dj[k]+j;
        if(ii<1||jj<1||ii>n||jj>m)  continue;
        a[ii][jj]-=sum;
    }
    return;
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            memset(vis,0,sizeof vis);
            dfs(i,j,0,1);
        }
    }
    cout << fixed << setprecision(2) << mn << '\n';
    return 0;
}