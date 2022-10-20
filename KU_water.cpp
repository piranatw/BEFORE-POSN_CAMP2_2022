#include <bits/stdc++.h>
using namespace std;
pair <int,int>  p[1001];
int dist(pair <int,int> x,pair <int,int> y){
    return abs(x.first-y.first)+abs(x.second-y.second);
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,ans,mn=1e9; cin >> n;
    for(int i=1;i<=n;i++){
        cin >> p[i].first >> p[i].second;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ans=0;
            for(int k=1;k<=n;k++)
                ans+=min(dist(p[k],p[i]),dist(p[k],p[j]));
            mn=min(ans,mn);
        }
    }
    cout << mn;
    return 0;
}