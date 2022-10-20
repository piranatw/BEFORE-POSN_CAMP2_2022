#include <stdio.h>
int main(){
    int n,i,j,q;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
    for( i=0;i<=2*n;i++){
        for( j=0;j<=2*n;j++){
            if(i==0||j==0)  printf("*");
            else if(i%2==0&&j<=i)   printf("*");
            else if(j%2==0&&i<=j)   printf("*");
            else printf("-");
        }
        printf("\n");
        }
    }
    return 0;
}