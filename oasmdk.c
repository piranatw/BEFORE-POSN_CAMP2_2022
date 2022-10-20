#include <stdio.h>
int main(){
    int i,cnt=0;
    char name[20];
    printf("Enter name:");
    gets(name);
    for(i=0;i<32;i++){
        if(name[i]=='\0')
        break;
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}