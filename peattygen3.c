#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
char a[1010];
int ch(char k){
    if(k=='N')  return 1;
    if(k=='S')  return 2;
    if(k=='E')  return 3;
    if(k=='W')  return 4;
}
int main(){
    int l,n=0,s=0,e=0,w=0,i;
    scanf(" %s %d",a,&l);
    int len=strlen(a);
    if(l==len){
        printf("0");    return 0;
    }
    for( i=0;i<len;i++){
        if(ch(a[i])==1)   n++;
        if(ch(a[i])==2)   s++;
        if(ch(a[i])==3)   e++;
        if(ch(a[i])==4)   w++;
    }
    while(l>0&&n>=0&&s>=0&&e>=0&&w>=0){
        // printf("%d %d %d %d\n",n,s,w,e);
        if(n>=s&&s>0){
            s--;
            l--;
            continue;
        }
        else if(s>=n&&n>0){
            n--;
            l--;
            continue;
        }
        if(w>=e&&e>0){
            e--;
            l--;
            continue;
        }
        else if(e>=w&&w>0){
            w--;
            l--;
            continue;
        }
        if(n==0&&e==0){
            if(s>0) s--;
            else if(w>0)    w--;
            l--;
            continue;
        }
        else if(n==0&&w==0){
            if(s>0) s--;
            else if(e>0)    e--;
            l--;
            continue;
        }
        else if(s==0&&e==0){
            if(n>0) n--;
            else if(w>0)    w--;
            l--;
            continue;
        }
        else if(s==0&&w==0){
            if(n>0) n--;
            else if(e>0)    e--;
            l--;
            continue;
        }
    }
    printf("%d",(abs(n-s)+abs(w-e))*2);
    return 0;
}