#include <stdio.h>
#define endl printf("\n");
int a[1001][1001];
int main(){
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
    }
    endl
    for(i=n-1;i>=0;i--){
        for(j=m-1;j>=0;j--){
            printf("%d ",a[i][j]);
        }
    }
    endl
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[j][i]);
        }
    }
    endl
    for(i=m-1;i>=0;i--){
        for(j=n-1;j>=0;j--){
            printf("%d ",a[j][i]);
        }
    }
    return 0;
}
/*
3 5 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
*/