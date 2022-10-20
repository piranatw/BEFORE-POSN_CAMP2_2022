#include <bits/stdc++.h>
using namespace std;
char a[1001][1001];
int di[4]={1,-1,0,0},dj[4]={0,0,1,-1},cnt=0,ch[1001][1001],mx=-1e9,n,m;
void sol(int x,int y){
    if(a[x][y]=='.'||ch[x][y]==0)    return;
    if(x<=0||y<=0||x>n||y>m)  return;
    ch[x][y]=0;
    cnt++;
    for(int i=0;i<4;i++){
        if(ch[x+di[i]][y+dj[i]]!=0&&a[x+di[i]][y+dj[i]]=='*'){
            sol(x+di[i],y+dj[i]);
        }
    }
    mx=max(mx,cnt);
}

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int ans=-1e9;
    cin >> m >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            if(a[i][j]=='.')    ch[i][j]=0;
            else                ch[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='*'){    
                cnt=0;
                sol(i,j);
            // if(cnt > mx) mx=cnt;
            }
        }
    }
    cout << mx;
    return 0;
}