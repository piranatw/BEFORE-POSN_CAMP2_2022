#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
char a[4010];
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",a);
        int i,len = strlen(a),sum=0;
        for(i=0;i<len;i++){
            if(a[i]=='D'){
                if(a[i-1]=='C') sum+=400;
                else sum+=500;
            }
            if(a[i]=='M'){
                if(a[i-1]=='C') sum+=900;
                else sum+=1000;
            }
            if(a[i]=='C'){
                if(a[i+1]=='D'||a[i+1]=='M') continue;
                else if(a[i-1]=='X')    sum+=90;
                else sum+=100;
            }
            if(a[i]=='X'){
                if(a[i+1]=='L'||a[i+1]=='C') continue;
                else if(a[i-1]=='I') sum+=9;
                else sum+=10; 
            }
            if(a[i]=='L'){
                if(a[i-1]=='X') sum+=40;
                else sum+=50;
            }
            if(a[i]=='V'){
                if(a[i-1]=='I') sum+=4;
                else sum+=5;
            }
            if(a[i]=='I'){
                if(a[i+1]=='V')continue;
                if(a[i+1]=='X')continue;
                else sum+=1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}