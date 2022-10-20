#include <stdio.h>
#include <string.h>
char n[1001];
int main(){
    scanf(" %s",n);
    int x,y,len=strlen(n);
    int i;
    for(i=0;i<len;i++){
        switch (n[i])
        {
        case 'N': y++;
            break;
        case 'S': y--;
            break;
        case 'W': x--;
            break;
        case 'E': x++;
            break;
        case 'Z': x=0; y=0;
            break;
        
        }
    }
    printf("%d %d",x,y);
}