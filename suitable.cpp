#include <bits/stdc++.h>
using namespace std;
long long a[10010],b[10100];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    long long n;
    cin >> n;
    for(int i=1;i<=n;i++)   cin >> a[i];
    for(int i=1;i<=n;i++)   cin >> b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+1+n);
    long long ans;
    for(int i=1;i<=n;i++){
        ans+=a[i]*b[i];
    }
    cout << ans;
    return 0;
}
