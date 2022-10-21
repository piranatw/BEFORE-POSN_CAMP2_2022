#include <bits/stdc++.h>
#define MxN 1e5
using namespace std;

int a[100100],b[100100];

int main(){
    int q;
    cin >> q;
    while(q--){
        int n,k;
        cin >> n >> k;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            if(i==1)    continue;
            b[i]=a[i]-a[i-1];
        }
        sort(b+2,b+n+1,greater <int> ());
        int sum=0;
        for(int i=1;i<=k;i++)    sum+=b[i];
        int ans=(a[n]-a[1])-sum;
        cout << ans << '\n';
    }
}
