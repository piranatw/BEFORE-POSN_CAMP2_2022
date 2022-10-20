#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define endl printf("\n")
char LEFT[1001],RIGHT[1001],tmpl[1001],tmpr[1001];
int main(){
    int n;
    scanf("%d",&n);
    int k=n;
    while(n--){
        char a,hn;
        scanf(" %c",&a);
        if(a=='p'){
            strcpy(tmpl,LEFT);
            strcpy(tmpr,RIGHT);
            scanf(" %c",&hn);
            if(hn=='L')   scanf(" %s",LEFT);
            else   scanf(" %s",RIGHT);
        }
        else if(a=='c'){
            strcpy(tmpl,LEFT);
            strcpy(tmpr,RIGHT);
            scanf(" %c",&hn);
            if(hn=='L'){
                strcat(LEFT,RIGHT);
                RIGHT[0]='\0';
            }
            if(hn=='R'){
                strcat(RIGHT,LEFT);
                LEFT[0]='\0';
            }
        }
        else if(a=='b'){
            strcpy(tmpl,LEFT);
            strcpy(tmpr,RIGHT);
            int x;
            scanf(" %c %d",&hn,&x);
            if(hn=='L'){
                strcpy(LEFT+x,"");
            }
            if(hn=='R'){
                strcpy(RIGHT+x,"");
            }
        }
        else if(a=='r'){
            strcpy(LEFT,tmpl);
            strcpy(RIGHT,tmpr);
        }
        else if(a=='q'){
            if(LEFT[0]!='\0')  printf("%s ",LEFT);
            else printf("- ");
            if(RIGHT[0]!='\0')  printf("%s\n",RIGHT);
            else printf("-\n");
        }
    }
    return 0;
}