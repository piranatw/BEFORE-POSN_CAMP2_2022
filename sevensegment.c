#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>

char a[3][1000];
char b[3][1000];
long long intpow(int a,int b){
    int i=0,am;
    long long r=1;
    am=a;
    while (i<b){
        r = r*am;
        i++;
    }
    return r;
}
int main(){
    int al,bl;
    scanf("%d %d",&al,&bl);
    int ia[al],ib[bl];
    long long sa=0,sb=0;
    char dump;
    int i,j;
    
    scanf("%c",&dump);
    for( i = 0 ; i < 3 ; i++){
        for( j = 0; j < al*4 - 1 ; j++){
            scanf("%c",&a[i][j]);
            //prf("%c",a[i][j]);
        }
        scanf("%c",&dump);
        //prf("\n");
        //fflush(stdin);
    }
    for( i = 0 ; i < 2 ; i++){
        for( j = 0; j < bl*4 - 1 ; j++){
            scanf("%c",&b[i][j]);
        }
        scanf("%c",&dump);
        //fflush(stdin);
    }
    for( j = 0; j < bl*4 - 1 ; j++){
        scanf("%c",&b[2][j]);
    }
    /*for( i = 0 ; i < 3 ; ++i){
        for( j = 0 ; j < al*4 ; ++j){
            prf("%c",a[i][j]);
        }
        prf("\n");
    }*/
    for( i = 0 ; i < al ; ++i){
        if(a[0][4*i] == ' ' && a[0][4*i+1] == ' ' && a[0][4*i+2] == ' ' && a[0][4*i] == ' ' && a[1][4*i+1] == ' ' && a[1][4*i+2] == '|' && a[2][4*i] == ' ' && a[2][4*i+1] == ' ' && a[2][4*i+2] == '|'){
            ia[i] = 1;//c
        }
        else if(a[0][4*i] == ' ' && a[0][4*i+1] == '_' && a[0][4*i+2] == ' ' && a[1][4*i] == ' ' && a[1][4*i+1] == '_' && a[1][4*i+2] == '|' && a[2][4*i] == '|' && a[2][4*i+1] == '_' && a[2][4*i+2] == ' '){
            ia[i] = 2;//c
        }
        else if(a[0][4*i] == ' ' && a[0][4*i+1] == '_' && a[0][4*i+2] == ' ' && a[1][4*i] == ' ' && a[1][4*i+1] == '_' && a[1][4*i+2] == '|' && a[2][4*i] == ' ' && a[2][4*i+1] == '_' && a[2][4*i+2] == '|'){
            ia[i] = 3;//c
        }
        else if(a[0][4*i] == ' ' && a[0][4*i+1] == ' ' && a[0][4*i+2] == ' ' && a[1][4*i] == '|' && a[1][4*i+1] == '_' && a[1][4*i+2] == '|' && a[2][4*i] == ' ' && a[2][4*i+1] == ' ' && a[2][4*i+2] == '|'){
            ia[i] = 4;//c
        }
        else if(a[0][4*i] == ' ' && a[0][4*i+1] == '_' && a[0][4*i+2] == ' ' && a[1][4*i] == '|' && a[1][4*i+1] == '_' && a[1][4*i+2] == ' ' && a[2][4*i] == ' ' && a[2][4*i+1] == '_' && a[2][4*i+2] == '|'){
            ia[i] = 5;//c
        }
        else if(a[0][4*i] == ' ' && a[0][4*i+1] == '_' && a[0][4*i+2] == ' ' && a[1][4*i] == '|' && a[1][4*i+1] == '_' && a[1][4*i+2] == ' ' && a[2][4*i] == '|' && a[2][4*i+1] == '_' && a[2][4*i+2] == '|'){
            ia[i] = 6;//c
        }
        else if(a[0][4*i] == ' ' && a[0][4*i+1] == '_' && a[0][4*i+2] == ' ' && a[1][4*i] == ' ' && a[1][4*i+1] == ' ' && a[1][4*i+2] == '|' && a[2][4*i] == ' ' && a[2][4*i+1] == ' ' && a[2][4*i+2] == '|'){
            ia[i] = 7;//c
        }
        else if(a[0][4*i] == ' ' && a[0][4*i+1] == '_' && a[0][4*i+2] == ' ' && a[1][4*i] == '|' && a[1][4*i+1] == '_' && a[1][4*i+2] == '|' && a[2][4*i] == '|' && a[2][4*i+1] == '_' && a[2][4*i+2] == '|'){
            ia[i] = 8;//c
        }
        else if(a[0][4*i] == ' ' && a[0][4*i+1] == '_' && a[0][4*i+2] == ' ' && a[1][4*i] == '|' && a[1][4*i+1] == '_' && a[1][4*i+2] == '|' && a[2][4*i] == ' ' && a[2][4*i+1] == '_' && a[2][4*i+2] == '|'){
            ia[i] = 9;//c
        }
        else if(a[0][4*i] == ' ' && a[0][4*i+1] == '_' && a[0][4*i+2] == ' ' && a[1][4*i] == '|' && a[1][4*i+1] == ' ' && a[1][4*i+2] == '|' && a[2][4*i] == '|' && a[2][4*i+1] == '_' && a[2][4*i+2] == '|'){
            ia[i] = 0;//c
        }
    }
    for( i = 0 ; i < al ; ++i){
        //prf("%d ",ia[i]);
        sa += intpow(10,al-1-i)*ia[i];
    }
    
    //prf("%lld\n",ia);
    for( i = 0 ; i < bl ; ++i){
        if(b[0][4*i] == ' ' && b[0][4*i+1] == ' ' && b[0][4*i+2] == ' ' && b[0][4*i] == ' ' && b[1][4*i+1] == ' ' && b[1][4*i+2] == '|' && b[2][4*i] == ' ' && b[2][4*i+1] == ' ' && b[2][4*i+2] == '|'){
            ib[i] = 1;//c
        }
        else if(b[0][4*i] == ' ' && b[0][4*i+1] == '_' && b[0][4*i+2] == ' ' && b[1][4*i] == ' ' && b[1][4*i+1] == '_' && b[1][4*i+2] == '|' && b[2][4*i] == '|' && b[2][4*i+1] == '_' && b[2][4*i+2] == ' '){
            ib[i] = 2;//c
        }
        else if(b[0][4*i] == ' ' && b[0][4*i+1] == '_' && b[0][4*i+2] == ' ' && b[1][4*i] == ' ' && b[1][4*i+1] == '_' && b[1][4*i+2] == '|' && b[2][4*i] == ' ' && b[2][4*i+1] == '_' && b[2][4*i+2] == '|'){
            ib[i] = 3;//c
        }
        else if(b[0][4*i] == ' ' && b[0][4*i+1] == ' ' && b[0][4*i+2] == ' ' && b[1][4*i] == '|' && b[1][4*i+1] == '_' && b[1][4*i+2] == '|' && b[2][4*i] == ' ' && b[2][4*i+1] == ' ' && b[2][4*i+2] == '|'){
            ib[i] = 4;//c
        }
        else if(b[0][4*i] == ' ' && b[0][4*i+1] == '_' && b[0][4*i+2] == ' ' && b[1][4*i] == '|' && b[1][4*i+1] == '_' && b[1][4*i+2] == ' ' && b[2][4*i] == ' ' && b[2][4*i+1] == '_' && b[2][4*i+2] == '|'){
            ib[i] = 5;//c
        }
        else if(b[0][4*i] == ' ' && b[0][4*i+1] == '_' && b[0][4*i+2] == ' ' && b[1][4*i] == '|' && b[1][4*i+1] == '_' && b[1][4*i+2] == ' ' && b[2][4*i] == '|' && b[2][4*i+1] == '_' && b[2][4*i+2] == '|'){
            ib[i] = 6;//c
        }
        else if(b[0][4*i] == ' ' && b[0][4*i+1] == '_' && b[0][4*i+2] == ' ' && b[1][4*i] == ' ' && b[1][4*i+1] == ' ' && b[1][4*i+2] == '|' && b[2][4*i] == ' ' && b[2][4*i+1] == ' ' && b[2][4*i+2] == '|'){
            ib[i] = 7;//c
        }
        else if(b[0][4*i] == ' ' && b[0][4*i+1] == '_' && b[0][4*i+2] == ' ' && b[1][4*i] == '|' && b[1][4*i+1] == '_' && b[1][4*i+2] == '|' && b[2][4*i] == '|' && b[2][4*i+1] == '_' && b[2][4*i+2] == '|'){
            ib[i] = 8;//c
        }
        else if(b[0][4*i] == ' ' && b[0][4*i+1] == '_' && b[0][4*i+2] == ' ' && b[1][4*i] == '|' && b[1][4*i+1] == '_' && b[1][4*i+2] == '|' && b[2][4*i] == ' ' && b[2][4*i+1] == '_' && b[2][4*i+2] == '|'){
            ib[i] = 9;//c
        }
        else if(b[0][4*i] == ' ' && b[0][4*i+1] == '_' && b[0][4*i+2] == ' ' && b[1][4*i] == '|' && b[1][4*i+1] == ' ' && b[1][4*i+2] == '|' && b[2][4*i] == '|' && b[2][4*i+1] == '_' && b[2][4*i+2] == '|'){
            ib[i] = 0;//c
        }
    }
    for( i = 0 ; i < bl ; ++i){
        //printf("%d ",ia[i]);
        sb += intpow(10,bl-1-i)*ib[i];
    }
    printf("%lld",sa+sb);
    return 0;
}