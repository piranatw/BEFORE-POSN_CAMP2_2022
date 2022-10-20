#include <stdio.h>
#define endl printf("\n")
int r,c,si,ej,A,ei,sj,cnt,ch=0;
int a[50][50],di[4]={-1,0,1,0},dj[4]={0,1,0,-1};
void play(int i ,int j){
    if(i==ei&&j==ej){    ch=1; return;}
    int k,ii,jj;
    for(k=0;k<4;k++){
        ii=i+di[(A+k)%4];
        jj=j+dj[(A+k)%4];
        if(ii<1 || jj < 1 || ii > r || jj >c)    continue;
        if(a[ii][jj]!=0)    continue;
        if(ch)  continue;
        a[ii][jj]=++cnt;
        play(ii,jj);
    }
}
int main(){
    int q,i,j;
    scanf("%d",&q);
    while(q--){
        ch=0;
        scanf("%d %d %d %d %d %d %d",&r,&c,&A,&si,&sj,&ei,&ej);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                a[i][j]=0;
            }
        }
        cnt=1;
        a[si][sj]=1;
        play(si,sj);
        for(i=1;i<=r;i++){
            for(j=1;j<=c;j++){
                printf("%d ",a[i][j]);
            }
            endl;
        }
    }
    return 0;
}