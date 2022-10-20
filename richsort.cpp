#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

struct A{
    int x,y;
    bool operator < (const A & o) const{
        if(x!=o.x) return x<o.x;
            return y>o.y;
        // if(x==o.x) return y>o.y;
        
    }
}a[101000];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    for(int i=1;i<=q;i++){
        cin >> a[i].x >> a[i].y;
    }
    sort(a+1,a+q+1);
    for(int i=1;i<=q;i++)   cout << a[i].x << " " << a[i].y << '\n';
    return 0;
}