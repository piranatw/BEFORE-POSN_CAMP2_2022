#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
int l,k,a,b;
char ans[1001];
void sol(int w,int l,int cnt){
    if(w==k||l==k)    {
        int i;
        for(i=1;i<=cnt-1;i++) printf("%c ",ans[i]);
        printf("\n");
        return;
    }
    ans[cnt]='W';
    sol(w+1,l,cnt+1);
    ans[cnt]='L';
    sol(w,l+1,cnt+1);

}
int main(){
    scanf("%d%d%d",&k,&a,&b);

    sol(a,b,1);
    return 0;
}