#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char a[1001],b[1001],tmp[10001];
int to10(char h[],int b){
    int l=strlen(h);
    int i,k,ans=0;
    for(i=0,k=l-1;i<l;i++,k--){
        if(h[i]-'0'<10){
            ans+=(h[i]-'0')*pow(b,k);
        }
        else{
            ans+=(h[i]-'A'+10)*pow(b,k);
        }
    }
    return ans;

}
int ton(int a,int b){
    int n=a,t=0;
    while(n>0){
        int r=n%b;
        n=n/b;
        if(r<10)    tmp[t++]=r+'0';
        else        tmp[t++]=r-10+'A';

    }
}
int main(){
    int k,n;
    scanf("%d %s %s",&n,&a,&b);
    int n1=to10(a,n),n2=to10(b,n);
    printf("%d\n",n1+n2);
    ton(n1+n2,n);
    int l=strlen(tmp),i;
    for(i=l-1;i>=0;i--) printf("%c",tmp[i]);
    return 0;

}
