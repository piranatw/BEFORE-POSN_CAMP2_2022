#include <bits/stdc++.h>
#define MxN 10001
#define pii(dp,b) pdpir<int dp,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int dp[101001];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,num;
    cin >> n;
    int sum=0;
    dp[0]=1;
    for(int i=1;i<=n;i++){
        cin >> num;
        sum+=num;
        for(int j=45001;j>=num;j--){
            if(dp[j-num]){
                dp[j]=1;
            }
        }
    }
    int mn=1e9,ans1,ans2;
    for(int i=1;i<=sum;i++){
        if(dp[i]){
            if(abs(sum-2*i)<mn){
                mn=abs(sum-2*i);
                ans1=i,ans2=sum-i;
            }
        }
    }
    if(ans1 > ans2) swap(ans1,ans2);
    cout << ans1 <<  ' ' << ans2;
    return 0;
}
