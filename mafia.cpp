#include <bits/stdc++.h>
#define MxN 1e5+10
#define pii pair<int,int>

using namespace std;
using ll=long long;
const int di[8]={1,-1,0,0,1,-1,1,-1},dj[8]={0,0,1,-1,1,1,-1,-1};

int r[10010],c[10010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,k;
    cin >> n >> m >> k;
    int mx=-2e9;
    for(int i=1;i<=n;i++){
        int x,y,R;
        cin >> x >> y >> R;
        for(int j=y-R;j<=y+R;j++){
            if(j>m) break;
            r[j]++;
            mx=max(mx,r[j]);
        }
        for(int j=x-R;j<=x+R && j >=0 ;j++){
            if(j > n) break;
            r[j]++;
            mx=max(r[j],mx);
        }
    }
    cout << mx;
    return 0;
}