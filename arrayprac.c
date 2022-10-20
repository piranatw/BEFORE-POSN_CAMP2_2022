#include <stdio.h>
int a[1001];
int main(){
    int n,k,cnt=0,i,j;
    scanf("%d",&n);
    for( i=1;i<=n;i++)   scanf("%d",&a[i]);
    scanf("%d",&k);
    for( i=1;i<=n;i++){
        if(k==a[i])   cnt++;
    }
    for( i=n;i>=1;i--){
        printf("%d ",a[i]);
    }
    printf("\n%d",cnt);
}