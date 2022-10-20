#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define endl printf("\n")
char a[2001];
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,k;
        scanf(" %s",a);
        scanf("%d%d",&n,&k);
        k%=n;
        int j,i,len=strlen(a);
        for(i=0;i<len;i+=n){
            j=n-k;
            do{
                printf("%c",a[i+j%n]);
                j++;
            }while((j+k)%n!=0);

        }
        endl;
    }
    return 0;
}
/*
2
abcdeghi
3 1
abcdeghi
3 2
*/