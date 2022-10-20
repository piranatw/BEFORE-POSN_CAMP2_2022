#include <stdio.h>
#include <string.h>
int A,B,C,ans[1001],mark[30][30][30];
void play(int a,int b,int c){
    if(a<0||b<0||c<0||a>A||b>B||c>C)    return;
    if(mark[a][b][c])   return;
    mark[a][b][c]=1;
    if(a==0)    ans[c]=1;
    //a-->b
    play(0,a+b,c);
    play(a-B+b,B,c);
    //a-->c
    play(0,b,c+a);
    play(a-C+c,b,C);
    //b-->c
    play(a,0,c+b);
    play(a,b-C+c,C);
    //b-->a
    play(A,b-A+a,c);
    play(a+b,0,c);
    //c-->a
    play(A,b,c-A+a);
    play(a+c,b,0);
    //c-->b
    play(a,b+c,0);
    play(a,B,c-B+b);

}
int main(){
    scanf("%d%d%d",&A,&B,&C);
    memset(ans,0,sizeof ans);
    play(0,0,C);
    int i;
    for(i=0;i<=20;i++){
        if(ans[i])
            printf("%d ",i);
    }
    return 0;
}