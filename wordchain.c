#include <stdio.h>
#include <string.h>
char a[30010][1010];
int main(){
    int n,m,i,j,k;
    scanf("%d%d",&n,&m);
    for( i=1;i<=m;i++){
        for( j=1;j<=n;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    int cnt;
    for( i=1;i<=m;i++){
        cnt=0;
        for( j=1;j<=n;j++){
            if(a[i+1][j]==a[i][j])  cnt++;
        }
        if(cnt<n-2){   
            for( k=1;k<=n;k++){
                printf("%c",a[i][k]);
            }   
            return 0;
        }
    }
    return 0;
}
/*
4 12
HEAD
HEAP
LEAP
TEAR
REAR
BAER
BAET
BEEP
JEEP
JOIP
JEIP
AEIO
*/