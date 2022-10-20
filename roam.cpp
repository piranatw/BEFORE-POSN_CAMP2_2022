#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[100010];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q,o,n,x,y;
    cin >> n >> o;
    while(o--){
        cin >> x >> y;
        a[x]++;
        a[y+1]--;
    }
    cin >> q;
    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
    }
    while(q--){
        int num;
        cin >> num;
        cout << a[num]<< '\n';
    }
    return 0;
}