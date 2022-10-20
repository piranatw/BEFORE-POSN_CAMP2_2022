#include <stdio.h>
#include <stdlib.h>
int a[10010],ans[1001],ch[1001];
int main(){
    int n,m,i;
    scanf("%d%d",&n,&m);
    for( i=1;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&a[0]);
    int idx=0,x;
    for( i=0;i<n;i++){
        scanf("%d",&x);
        x++;
        while(x){
            idx++;
            idx%=n;
            if(a[idx]==-1)  continue;
            x--;
        }
        ans[i%m]+=a[idx];
        a[idx]=-1;
    }
  
    for( i=0;i<m;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}
/*
5 3
3 5 2 4 1 3 5 1 2 1
*/