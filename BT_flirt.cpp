#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
int a[1001][1001],k,n,m,vis[1001][1001];
void sol(int i,int j,int x,int y,int state,int z){
    if(i==x&&j==y)  return;
    if(i<1||j<1||i>n||i>m)  return;
    vis[i][j]=1;
    a[i][j]=state;
    // cerr << z <<'\n';
    if(k==0||z==1)    {
        if(i-1<1||j<1||i>n||j>m)
                sol(i,j+1,x,y,state+1,2);
        else    sol(i-1,j,x,y,state+1,1);
    }
    if(k==1||z==2){
        if(i<1||j<1||i>n||j+1>m)
            sol(i+1,j,x,y,state+1,3);
        else    sol(i,j+1,x,y,state+1,2);
    }
    if(k==2||z==3){
        if(i<1||j<1||i+1>n||j>m)
            sol(i,j-1,x,y,state+1,4);
        else    sol(i+1,j,x,y,state+1,3);
    }
    if(k==3||z==4){
        if(i<1||j-1<1||i>n||j>m)
            sol(i-1,j,x,y,state+1,1);
        else    sol(i,j-1,x,y,state+1,4);
    }
    return;
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int si,sj,q,ei,ej;
    cin >>q;
    while(q--){
        cin >> n >> m >> k >> si >> sj >>ei >> ej;
        sol(si,sj,ei,ej,1,0);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout << a[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
/*
1 
5 6 1 3 4 1 4
*/