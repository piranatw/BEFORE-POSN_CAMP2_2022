#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char a[10010],b[10001],tmp[10001];
int la,lb,mx,tod,ans[25000001],sum,ch1=0,ch2=0;
int main(){
    scanf(" %s",tmp);
    if(tmp[0]=='0'){
        printf("0");
        return 0;
    }
    else if(tmp[0]=='-'){
        ch1=1;
        strcpy(a,&tmp[1]);
    }
    else{
        strcpy(a,tmp);
    }
    scanf(" %s",tmp);
    if(tmp[0]=='0'){
        printf("0");
        return 0;
    }
    else if(tmp[0]=='-'){
        ch2=1;
        strcpy(b,&tmp[1]);
    }
    else{
        strcpy(b,tmp);
    }
    if(ch1!=ch2)    printf("-");
    // printf("%s\n%s",a,b);
    int lena=strlen(a),lenb=strlen(b);
    // if(lena<lenb)
    int i,j,k,p;
    for(i=lena-1;i>=0;i--){
        for(j=lenb-1,k=lena-1-i;j>=0;j--){
            int sum=(a[i]-'0')*(b[j]-'0')+ans[k];p=k;
            ans[p]=sum%10;
            ans[p+1]+=sum/10;
            k=p+1;
        }
    }
    // if(tod) ans[k++]+=tod;
    if(ans[k]){
        for(i=k;i>=0;i--){
            printf("%d",ans[i]);
        }
    }
    else{
        for(i=k-1;i>=0;i--){
            printf("%d",ans[i]);
        }
    }
    return 0;
}