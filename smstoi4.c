#include <stdio.h>
char tel[15][10]={{},{},{"ABC"},{"DEF"},{"GHI"},{"JKL"},{"MNO"},{"PQRS"},{"TUV"},{"WXYZ"}};
char ans[100];
int cnt;
char play(int x,int y){
    if(x==7 || x==9){
        return tel[x][(y+3)%4];
    }
    else{
        return tel[x][(y+2)%3];
    }

}
int main(){
    int q,r,c,n,num,i;
    scanf("%d %d %d",&q,&num,&r);
    if(r==0 || num==1) cnt=0;
    else {
        ans[0]=play(num,r);
        cnt=1;
    }
    while(--q){
        scanf("%d %d %d",&c,&r,&n);
        num=num+c+(r*3);
        if(n==0) continue;
        if(num!=1){
            ans[cnt]=play(num,n);
            cnt++;
        }
        else{
            if(n>=cnt) cnt=0;
            else cnt-=n;
        }
    }
    if(cnt<=0){
        printf("null");
        return 0;
    }
    for( i=0;i<cnt;i++){
        printf("%c",ans[i]);
    }
    return 0;
}