#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char a[10001][101];
int b[10010],cnt[10010];

int main(){
    int n,mx=-1e9,f=-1e9,i,j,num;
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        scanf("%d",&num);
        if(mx<num) mx=num; 
        cnt[num]++;
    }
    for( i=1;i<=mx;i++) 
        if(cnt[i]>f)    f=cnt[i];
    for( i=f;i>0;i--){
        for( j=1;j<=mx;j++){
            if(cnt[j]!=0){   
                a[i][j]='*';
                cnt[j]--;
            }
            else    a[i][j]='.';
        }
    }
    for( i=1;i<=f;i++){
        for( j=1;j<=mx;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
    // cout << f << " "<<mx;
    return 0;
}