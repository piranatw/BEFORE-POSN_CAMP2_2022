#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int XXX=1e6+10,di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int dp[1111111];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int num,q;
    cin >> q;
    dp[1]=0;
    for(int i=2;i<=1000000;i++){
        dp[i]=dp[i-1]+1;
        if(i%3==0){
            dp[i]=min(dp[i],dp[i/3]+1);
        }
        if(i%2==0){
             dp[i]=min(dp[i],dp[i/2]+1);
        }
    }
    while(q--){
        cin >> num;
        cout << dp[num]<< '\n';
    }
    return 0;
}
