#include <stdio.h>

int a[1001][100],di[4]={1,-1,0,0},dj[4]={0,0,1,-1},vis[100][100],mx=-1e9,n;
void sol(int x,int y){
    int i;
    if(mx<a[x][y])  mx=a[x][y];
    for( i=0;i<4;i++){
        int ii=di[i]+x,jj=dj[i]+y;
        if(ii<1||jj<1||ii>n||jj>n)  continue;
        if(a[ii][jj]==100||a[x][y]>=a[ii][jj]) continue;
        sol(ii,jj);
    }
    return;
}
int main(){
    int si,sj,i,j;
    scanf("%d%d%d",&n,&sj,&si);
    for( i=1;i<=n;i++){
        for( j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    sol(si,sj);
    printf("%d",mx);
    return 0;
}
