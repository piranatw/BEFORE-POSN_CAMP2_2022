#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int di[8]={1,-1,0,0,-1,1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};

int r,c;
char a[30][30];
char s[20];

int main(){
    int i,j,k,l;
    scanf("%d %d",&r,&c);
    for( i=1;i<=r;i++){
        for( j=1;j<=c;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for( i=1;i<=r;i++){
        for( j=1;j<=c;j++){
            a[i][j]=tolower(a[i][j]);
        }
    }
    int q;
    scanf("%d",&q);
    while(q--){
        scanf(" %s",s+1);
        int len=strlen(s+1);
        for( i=1;i<=len;i++) s[i]=tolower(s[i]);
        for( i=1;i<=r;i++){
            for( j=1;j<=c;j++){
                if(a[i][j]!=s[1]) continue;
                for( k=0;k<8;k++){
                    int ii=i+di[k],jj=j+dj[k],ch=1;
                    if(ii < 1 || jj < 1 || ii > r || jj > c) continue;
                    if(a[ii][jj]!=s[2]) continue;
                    for( l=3;l<=len;l++){
                        ii+=di[k],jj+=dj[k];
                        if(a[ii][jj]!=s[l]){ 
                            ch=0;
                            break;
                        }
                    }
                    if(ch){
                        printf("%d %d\n",i-1,j-1);
                        i=r+1,j=c+1;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}