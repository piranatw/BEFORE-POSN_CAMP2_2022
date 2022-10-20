#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int r,n,k,a[1001],vis[1001],cnt=0;
void permu(int state,int q){
    int i,j;
    if(state==n){
        cnt++;
        if(cnt==k){
            for(i=0;i<n;i++){
                printf("%d ",a[i]);
            }
            exit(0);
        }
    }
    for(i=q+1;i<=r;i++){
        if(vis[i]) continue;
        a[state]=i;
        permu(state+1,i);
    }
}
int main(){
    scanf("%d %d %d",&r,&n,&k);
    permu(0,0);
    return 0;
}