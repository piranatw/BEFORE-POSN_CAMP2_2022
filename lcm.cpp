#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

long long gcd(long long i,long long j){
    if(i%j==0){
        return j;
    }
    gcd(j,i%j);
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    long long n,m,q;
    cin >> q >> n >> m;
    if(n < m)   swap(n,m);
    long long ans=gcd(n,m);
    q=q-2;
    while(q--){
        long long num;
        cin >> num;
        m=num*m/gcd(m,num);
    }
    cout << m;
    return 0;
}