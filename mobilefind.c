#include <stdio.h>
#include <stdlib.h>
int a[40][40];
int main(){
    int t,h,w,i,j,mx=-1,x,y;
    scanf("%d",&t);
    while(t--){
        mx=-1;
        scanf("%d %d",&h,&w);
        for(i=1;i<=h;i++){
            for(j=1;j<=w;j++){
                scanf("%d",&a[i][j]);
            }
        }
        for(i=1;i<=h;i++){
            for(j=1;j<=w;j++){
                if(abs(a[i][j]-a[i][j+1])<=10&&a[i][j]+a[i][j+1]>mx&&j+1<=w){
                    mx=a[i][j]+a[i][j+1];
                    x=i,y=j;
                }
                if(abs(a[i][j]-a[i+1][j])<=10&&a[i][j]+a[i+1][j]>mx&&i+1<=h){
                    mx=a[i][j]+a[i+1][j];
                    x=i,y=j;
                }
            }
        }
        printf("%d %d",x,y);
    }
    return 0;
}
/*
1
4 5
5 1 2 10 4 
4 30 3 0 100 3 25 10 4 10 3 20 4 8 5
*/