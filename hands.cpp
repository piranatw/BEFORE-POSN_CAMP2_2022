#include <bits/stdc++.h>
using namespace std;
int a[2010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+1+n,greater <int>());
    int sum=0;
    for(int i=1;i<=n;i+=k){
        sum+=a[i];
    }
    cout << sum;
    return 0;
}
