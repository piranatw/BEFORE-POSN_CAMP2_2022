#include <bits/stdc++.h>
using namespace std;
int a,b;
double dist(double x,double y){
    return sqrt(pow(x-a,2)+pow(y-b,2));
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    double n,r,xx,yy,ans=0;
    cin >> n >> a >> b >> r;
    for(int i=1;i<=n;i++){
        cin >> xx >> yy;
        if(dist(xx,yy)<=r) ans++;
    }
    cout << ans << '\n';
    return 0;
}