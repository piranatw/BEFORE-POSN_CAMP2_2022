#include <bits/stdc++.h>
using namespace std;
#define MxN 100007
int a[MxN],n,m,di[5]={1,-1,0,0},dj[5]={0,0,1,-1};
void sol(int x,int y,int z){
    int ans;
    for(int i=x;i<=z;i++){
        for(int j=y;j<=z;j++){
            if(i==x||i==z||i==z+(z-1)){
                for(int k=y;k<=y+z;k++){
                    if(a[i][k]!='o')   a[i][j]='S';
                    else            for(int v=0;v<=4;v++)   return  sol(x+di[v],y+dj[v],z);
                }   
            }
            if(j==y||j==z){
                for(int k=x;k<=2*z-1;k++){
                    if(k!=y||)
                }
            }
        }
    }
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m;
    // cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    sol(0,0,3);
    return 0;
}