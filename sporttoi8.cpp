#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int k,a,b;
char ans[10010];
void sol(int state,int w,int l){
    if(w==k || l==k){
        for(int i=1;i<=state-1;i++)   cout << ans[i] << ' ';
        cout << '\n';
        return;
    }
    ans[state]='W';
    sol(state+1,w+1,l);
    ans[state]='L';
    sol(state+1,w,l+1);
}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    cin >> k >> a >> b;
    sol(1,a,b);
    return 0;
}