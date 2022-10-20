#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char a[10001];
int main(){
    int q=5;
    while(q--){
        scanf(" %s",&a);
        int len=strlen(a),i,sum=0;
        for(i=0;i<len;i++){
            sum+=pow(a[i]-'0',i+1);
        }
        int n=atoi(a);
        if(n==sum)  printf("Y");
        else printf("N");
    }
    return 0;
}