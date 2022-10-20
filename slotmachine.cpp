#include <stdio.h>
int a[1001][1001],ans[800000][10];
int main(){
    int n,i,j,k,l,w,cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(a[i][1]!=a[j][2])    continue;
            for(k=1;k<=n;k++){
                if(a[j][2]!=a[k][3])    continue;
                for(l=1;l<=n;l++){
                    if(a[k][3]!=a[l][4])    continue;
                    for(w=1;w<=n;w++){
                        if(a[l][4]!=a[w][5])    continue;
                        cnt++;
                        ans[cnt][1]=i;
                        ans[cnt][2]=j;
                        ans[cnt][3]=k;
                        ans[cnt][4]=l;
                        ans[cnt][5]=w;
                    }   
                }   
            }   
        }   
    }
    printf("%d\n",cnt);
    for(i=1;i<=cnt;i++){
        for(j=1;j<=5;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}