#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int l,n,x,y,z,sx[1001],sy[1001],sz[1001],m[1001],k[1001],o[1001],mn=1e9;
int vis[10001];
void sol(int i,int j,int z,int cnt,int a,int b,int c){
    if(a>=n&&b>=n&&c>=n){
        if(mn > cnt)    mn=cnt;
        return;
    }
    int t;
    for(t=1;t<=l;t++){
        if(vis[t])  continue;
        vis[t]=1;
        int dis=((sx[t]-i)*(sx[t]-i)+(sy[t]-j)*(sy[t]-j)+(sz[t]-z)*(sz[t]-z));
        sol(sx[t],sy[t],sz[t],cnt+dis,a+m[t],b+k[t],c+o[t]);
        vis[t]=0;
    }
    return;
}
int main(){
    scanf("%d %d %d %d",&n,&x,&y,&z);
    scanf("%d",&l);
    int i;
    for(i=1;i<=l;i++){
        scanf("%d%d%d%d%d%d",&sx[i],&sy[i],&sz[i],&m[i],&k[i],&o[i]);
    }
    sol(x,y,z,0,0,0,0);
    printf("%d",mn);
    return 0;
}
/*
1
0 0 0
2
10 0 0
2 5 7
0 10 0
0 3 9
*/