#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[100000];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int l,h,r,q;
    cin >> q;
    while(q--){
        cin >> l >> h >> r;
        for(int j=l;j<r;j++){
            if(a[j]<h)  a[j]=h;
        }
    }
    int state=0;
    for(int i=1;i<=270;i++){
        if(a[i]!=state){
            cout << i << ' ' << a[i] << ' ';
            state=a[i];
        }
    }
    return 0;
}