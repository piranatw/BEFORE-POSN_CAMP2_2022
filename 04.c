#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double  a,b,c,d,ans;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    printf("%.2lf",(a/(c-b))*d);
}