#include <bits/stdc++.h>
using namespace std;
int ng[5]={6,9,20};
int a[1001],dp[111];
int main(){
  cin.tie(0)->ios::sync_with_stdio(0);
  int n;
  cin >> n;
  if(n<6){
    cout <<"no";
    return 0;
  }
  dp[0]=1;
  for(int i=6;i<=n;i++){
    for(int j=0;j<3;j++){
      if(ng[j]-i<0) continue;
      dp[i]=dp[i-ng[j]];
      if(dp[i]) cout << i << "\n";
    }
  }
  return 0;
}
