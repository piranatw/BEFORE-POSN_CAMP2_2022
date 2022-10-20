#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#define endl printf("\n")
int n,m,dir,vis[1001][1001],a[1001][1001],ei,ej;
void sol(int i,int j,int k,int state){
    a[i][j]=state;
    if(i==x&&j==y)  return;

}
int main(){
    int si,sj,ei,ej,q;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d %d %d %d %d",&n,&m,&dir,&si,&sj,&ei,&ej);
        sol(si,sj,dir,1);
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                printf("%d ",a[i][j]);
            }
            endl;
        }
    }
    return 0;
}