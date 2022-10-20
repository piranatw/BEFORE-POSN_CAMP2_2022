#include <stdio.h>
char a[1001][1001];
int b[10010];
int main(){
    int n,j,i,m,x,k,l;
    scanf("%d%d",&n,&m);
    for( k=1;k<=n;k++){
        for( l=1;l<=m;l++){
            scanf(" %c",&a[k][l]);
        }
    }
    for( i=1;i<=m;i++)  {
        scanf("%d",&x);
        for( j=1;j<=n;j++){
            if(a[j][i]=='O') break;
        }
        while(j>0&&x>0){
            j--; x--; a[j][i]='#';
        }
    }
    for( k=1;k<=n;k++){
        for( l=1;l<=m;l++){
            printf("%c",a[k][l]);
        }
        printf("\n");
    }
    return 0;
}