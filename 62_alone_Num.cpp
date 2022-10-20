#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
unordered_map <int,int> mp;
int  a[100100];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q,n;
    cin >> q;
    while(q--){
        cin >> n;
        int cnt=0;
        for(int i=1;i<=n;i++){
            cin>> a[i];
            mp[a[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(mp[a[i]]==1) cnt++;
        }
    if(cnt==0)  cout << "No Alone Num" << '\n';
    else for(int i=1;i<=n;i++){
        if(mp[a[i]]==1) cout << a[i] <<' ';
    }
    cout << '\n';
    mp.clear();
    }
    return 0;
}