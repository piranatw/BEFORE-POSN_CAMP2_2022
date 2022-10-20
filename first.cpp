#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// using namespace std;
int main(){
    // cin.tie(0)->ios::sync_with_stdio(0);
    double r,a,b,c,d;
    scanf("%lf",&r);
    a=(r*r*4)*M_PI;
    b=((4.0/3*r*r*r)*M_PI);
    c=(r*r)*M_PI;
    d=(2*r)*M_PI;
    printf("%.3lf \n",a);
    printf("%.3lf \n",b);
    printf("%.3lf \n",c);
    printf("%.3lf \n",d);
    return 0;
}