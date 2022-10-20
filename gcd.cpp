#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int gcd(int i,int j){
    if(j==0)    return i;
    if(i<j){
        int tmp;
        tmp=i;
        i=j;
        j=tmp;
    }
    int r=i%j;

    gcd(j,r);

}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m,q;
    cin >> q;
    cin >>n >>m;
    int ans=gcd(n,m);
    while(q-2>0){
    int num;
    cin >> num;
    ans=gcd(num,ans);
    q--;
    }
    cout << ans;
    return 0;
}