#include <stdio.h>
int n,ans[10001];
void sol(int state,int cnt){
    int i;
    if(state==n){
        for(i=0;i<state;i++) printf("%d",ans[i]);
        printf("\n");
        return;
    }
    ans[state]=cnt^0;
    sol(state+1,0);
    ans[state]=cnt^1;
    sol(state+1,1);
}
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&n);
        sol(0,0);
    }
    return 0;
}