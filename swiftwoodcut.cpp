#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const long long di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
long long a[1001000];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    long long n,b,c;
    cin >> n >> b;
    for(long long i=1;i<=n;i++)   cin >> a[i];
    long long l=0,r=1e9;
    while(l<r){
        c=0;
        long long mid=(l+r+1)/2;
        for(long long i=1;i<=n;i++){
            c+=max(0ll,a[i]-mid);
        }
        if(c>=b) l=mid;
        else        r=mid-1;
    }
    cout << l;
    return 0;
}
/*
4 7 20 15 10 17
*/