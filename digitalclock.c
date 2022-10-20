#include <stdio.h>
int main(){
    int h1,h2,t1,t2;
    scanf("%d%d%d%d",&h1,&t1,&h2,&t2);
    int mxh=h2-h1,mxt=t2-t1;
    if(mxt < 0){
        mxt=mxt+60;
        mxh--;
    }
    if(mxh<0){
        mxh=mxh+24;
    }
    printf("%d %d",mxh,mxt);
    return 0;
}