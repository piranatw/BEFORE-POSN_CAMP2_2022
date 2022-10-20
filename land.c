#include <stdio.h>
double n,m,a[5][5],vis[5][5],mn=100000000;
int di[8]={1,-1,0,0,-1,1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};
void dfs(int i,int j,double ans,double state){
    ans+=a[i][j];
    int k,l;
    double sum=a[i][j]*0.1;
    vis[i][j]=1;
    if(state==n*m){
        vis[i][j]=0;
        if(mn>ans)  mn=ans;
        return;
    }
    for( k=0;k<8;k++){
        int ii=di[k]+i,jj=dj[k]+j;
        if(ii<1||jj<1||ii>n||jj>m)  continue;
        a[ii][jj]+=sum;
    }
    for( k=1;k<=n;k++){
        for( l=1;l<=m;l++){
            if(vis[k][l]) continue;
            dfs(k,l,ans,state+1);
        }
    }
    vis[i][j]=0;
    for( k=0;k<8;k++){
        int ii=di[k]+i,jj=dj[k]+j;
        if(ii<1||jj<1||ii>n||jj>m)  continue;
        a[ii][jj]-=sum;
    }
    return;
}
int main(){
    int i,j;
    scanf("%lf%lf",&n,&m);
    for( i=1;i<=n;i++){
        for( j=1;j<=m;j++){
            scanf("%lf",&a[i][j]);
        }
    }
    for( i=1;i<=n;i++){
        for( j=1;j<=m;j++){
            dfs(i,j,0,1);
        }
    }
    printf("%.2lf",mn);
    return 0;
}