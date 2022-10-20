#include <bits/stdc++.h>
using namespace std;
long long a[100100];
int main(){
    long long n,m;
    cin >> m >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        a[i]*=10;
    }
    sort(a+1,a+n+1);
    long long l=0,r=1e9;
    while(l<r){
        long long mid=l+(r-l)/2,last,dis,cnt=1;
        last=a[1];
        for(int i=1;i<=n;i++){
            if((a[i]-last)/2>mid){
                cnt++;
                last=a[i];
            }
        }
        if(cnt > m)     l=mid+1;
        else            r=mid;
    }
    cout << l/10 << "." << l%10;
    return 0;
}