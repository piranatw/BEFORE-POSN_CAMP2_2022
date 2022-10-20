#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int n;

int a[10001],ans[10010],vis[10010];
void permu(int state){
    if(state==n){
        for(int i=0;i<n;i++)   cout << ans[i] << ' ';
        cout << '\n';
    }
    for(int i=1;i<=n;i++){
        if(state==0 && a[i])  continue;
        if(vis[i])  continue;
        vis[i]=1;
        ans[state]=i;
        permu(state+1);
        vis[i]=0;
    }
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int m;
    cin>> n >> m;
    for(int i=1;i<=m;i++){
        int tmp; cin >> tmp;
        a[tmp]++;
    }
    permu(0);
    return 0;
}