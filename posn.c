#include <stdio.h>
#define endl "\n"
#define star printf("*")
#define dot printf("-")
int main(){
    int n,q,i,j;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
    for( i=1;i<=n;i++){
        for( j=1;j<=n;j++){
            if(i==1||j==1)  printf("*");
            else if(j==n&&i<=n/2)    printf("*");
            else if(i==n/2+1)         printf("*");
            else printf("-");
        }
        printf("-");
          for( j=1;j<=n;j++){
            if(i==1||j==1||i==n||j==n)  star;
            else    dot;
        }
        printf("-");
        for( j=1;j<=n;j++){
            if(i==1||i==n||i==n/2+1)    star;
            else if(j==1&&i<=n/2)   star;
            else if(j==n&&i>n/2)   star;
            else    dot;
        }
        dot;
        for( j=1;j<=n;j++){
            if(j==1||j==n)  star;
            else if(i==j)   star;
            else            dot;
        }
        printf(endl);
    }
    }
    // for( i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i==1||j==1||i==n||j==n)  printf("*");
    //         else    printf("-");
    //     }
    //     printf("-");
    //     printf(endl);
    // }
    return 0;
}