#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int ng[5]={6,9,20};
int dp[1010];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    dp[0]=1;
    for(int i=6;i<=100;i++){
        if(i>=6&&dp[i-6]==1)    dp[i]=1;
        if(i>=9&&dp[i-9]==1)    dp[i]=1;
        if(i>=20&&dp[i-20]==1)    dp[i]=1;
    }
    cin >> n;
    if(n<6){
        cout << "no";
        return 0;
    }
    for(int i=6;i<=n;i++){
        if(dp[i])
            cout << i << '\n';
    }
    return 0;
}
