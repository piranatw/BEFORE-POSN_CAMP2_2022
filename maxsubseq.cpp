#include <bits/stdc++.h>
using namespace std;
int dp[100100];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,st=1,en,mx=-2e9,mn=0,last,sum=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        int num;
        cin >> num;
        sum+=num;
        if(sum > mx){
            en=i;
            last=st;
            mx=max(mx,sum);
        }
        if(sum<0){
            sum=0;
            st=i+1;
        }
    }
//    for(int i=1;i<=n;i++)   cout << dp[i] << '\n';
    cout << last << ' ' << en <<  '\n' <<  mx;
    return 0;
}
