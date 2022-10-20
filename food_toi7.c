#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define endl printf("\n")
int a[1001],cnt=0,vis[1001],ans[1001],n;
void sol(int state){
    int i,j;
    if(state==n){
        for(i=0;i<n;i++){
                printf("%d ",ans[i]);
        }
            endl;
            return;
    }
    
    for( i=1;i<=n;i++){
            if(vis[i])  continue;
            if(state==0 && a[i]) continue;
            vis[i]=1;
            ans[state]=i;
            sol(state+1);
            vis[i]=0;
    }
}

    

int main(){
    int m;
    scanf("%d%d",&n,&m);
    int i;for(i = 0; i < m; i++){
        int temp;
        scanf("%d",&temp);
        a[temp]=1;
    }
    sol(0);
    return 0;
}