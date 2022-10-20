#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[100100];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,q;
    cin >> n >> q;
    for(int i=0;i<n;i++)    cin >> a[i];
    sort(a,a+n);
    while(q--){
        int val;
        cin >> val;
        cout << upper_bound(a,a+n,val)-a << '\n';
    }
    return 0;
}