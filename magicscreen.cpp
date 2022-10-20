#include <bits/stdc++.h>
using namespace std;
int a[10010][10010],cnt[5];
int sol(int si,int sj,int ei,int ej){
    if(si==ei&&sj==ej)  return a[si][sj];
    int mi=si+(ei-si)/2,mj=sj+(ej-sj)/2;
    cnt[sol(si,sj,mi,mj)]++;
    cnt[sol(mi+1,mj+1,ei,ej)]++;
    cnt[sol(si,mj+1,mi,ej)]++;
    cnt[sol(mi+1,sj,ei,mj)]++;
    int mx=0,ans;
    for(int i=1;i<=3;i++){
        if(mx<cnt[i]){   mx=cnt[i]; ans=i;}
        else if(mx==cnt[i]) ans=i;
    }
    return ans;
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,q;
    cin >> q;
    while(q--){
        for(int i=1;i<=3;i++)   cnt[i]=0;
        cin >> n;
        for(int i=1;i<=n;i++)   for(int j=1;j<=n;j++)   cin >> a[i][j];
        cout << sol(1,1,n,n) << '\n';
    }
    return 0;
}