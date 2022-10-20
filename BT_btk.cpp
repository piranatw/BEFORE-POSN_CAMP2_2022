#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x1,y1,x2,y2,x3,y3;
    double a,b,c,area;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    area=abs(x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3)/2.0;
    a=sqrt(area*4/sqrt(3));
    printf("%.2lf ",a);
    printf("%.2lf ",a/2.0);
    c=sqrt(3)*a/2.0;
    printf("%.2lf",c);
    return 0;
}