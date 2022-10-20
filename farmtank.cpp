#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const long long di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

long long a[1000010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    long long n,m;
    cin >> n >> m ;
    for(int i=1;i<=n;i++)   cin >> a[i];
    long long l=0,r=1e18,mid;
    while(l<r){
        mid=l+(r-l)/2;
        long long sum=0;
        for(int i=1;i<=n;i++){
            sum+=mid/a[i];
        }   
        if(sum >= m) r=mid;
        else l=mid+1;
    }
    cout << l;
    return 0;
}