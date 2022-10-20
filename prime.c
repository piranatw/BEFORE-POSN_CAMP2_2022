#include <stdio.h>
#include <math.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[8000001];

int main(){
    int n,i,j;
    scanf("%d",&n);
    if(n==1){
        printf("2");    return 0;
    }
    for( i=3;i<=8000000;i++){
        if(i%2==1)  a[i]=1;
    }
    for( i=3;i<sqrt(8000000);i++){
        if(a[i]){
            for( j=i*i;j<=8000000;j+=i)
                if(a[j])    a[j]=0;
        }
    }
    int count;
    for( i=3,count=1;count<=n;i+=2){
        if(a[i])    count++;
        if(n==count){
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}   