#include <stdio.h>
#include <math.h>
#define MxN 2e9
#define pii(a,b) pair<a,b>

const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int main(){
    // cin.tie(0)->ios::sync_with_stdio(0);
    int n,ch=0,i;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)  ch=1;
    if(n==1){    printf("No");
        return 0;
    }
    if(ch==1)   printf("No");
    else        printf("Yes");
    return 0;
}