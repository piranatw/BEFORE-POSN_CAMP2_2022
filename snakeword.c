#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#define endl printf("\n")
char a[1001][1001],k[10010];
int len,vis[1001][1001],di[4]={1,-1,0,0},dj[4]={0,0,1,-1},n,m,x[1001][2],ch;
struct A{
    int x,y;
};
void sol(int i,int j,int state){
    int s;
    // printf("%d %d\n",len,state);
    x[state][0]=i,x[state][1]=j;
    if(state+1==len){
        ch=1;
        for(s=0;s<len;s++){
            printf("%d %d\n",x[s][0],x[s][1]);
        }
        return;
    }
    vis[i][j]=1;
    int f;
    // printf("%d %d\n",i,j);
    for(f=0;f<4;f++){
        int ii=i+di[f],jj=dj[f]+j;
        if(ii<1||jj<1||ii>n||jj>m||vis[ii][jj])  continue;
        if(a[ii][jj]!=k[state+1])    continue;
        vis[ii][jj] = 1;
        sol(ii,jj,state+1);
        vis[ii][jj]=0;
    }
        vis[i][j] = 0;
    
}
int main(){
    int i,j;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf(" %c",&a[i][j]);
            a[i][j] = toupper(a[i][j]);
        }
    }
    int q;
    scanf("%d",&q);
    while(q--){
        int c,cnt=0;
        ch=0;
        scanf(" %s",k);
        len=strlen(k);
        for(i=0;i<len;i++) k[i]=toupper(k[i]);
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(a[i][j]==k[0])   cnt++;
                vis[i][j] = 0;
            }
        }
        for(i=1,c=0;i<=n;i++,c++){
            for(j=1;j<=m;j++){
                if(a[i][j]==k[0]){
                    sol(i,j,0);

                }
            }
        }
        if(ch==0){
            printf("No Matching Word\n");
        }
    }
    return 0;
}