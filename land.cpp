#include <bits/stdc++.h>
using namespace std;
int n,m,di[8]={1,-1,0,0,1,1,-1,-1},dj[8]={0,0,1,-1,-1,1,1,-1},mn=-1;
int a[1010][1010],vis[1010][1010];
void sol(int i,int j,int ans,int state){
    ans+=a[i][j];
    if(state==m*n){
        if(ans < mn)    mn=ans;
        return;
    }
    double sum=a[i][j]*0.1;
    vis[i][j]=1;
    for(int k=0;k<8;k++){
        int ii=di[k]+i,jj=dj[k]+j;
            if(vis[i][j])   continue;
            a[ii][jj]+=sum;   
    }
    for(int k=1;k<=n;k++){
        for(int l=1;l<=m;l++){
            if(i < 1|| j <1 || i >n || j > m)   continue;
            if(vis[i][j])   continue;
            sol(k,l,ans,state+1);
        }
    }
    vis[i][j]=0;
    for(int k=0;k<8;k++){
        int ii=di[k]+i,jj=dj[k]+j;
        if(i < 1|| j <1 || i >n || j > m)   continue;
            a[ii][jj]-=sum;   
    }
}
int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            memset(vis,0,sizeof vis);
            sol(i,j,0,1);
        }
    }
    cout << mn;
    return 0;
}