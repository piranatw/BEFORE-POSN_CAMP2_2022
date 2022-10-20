#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

unordered_map <int,int> mp;

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q,n;
    cin >> q;
    while(q--){
        cin>>n;
        vector <int>    v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int ch=1;
        for(int i=0;i<n;i++){
            if(mp[v[i]]==1){
                cout << v[i] << ' ';
                ch=0;
            }
        }
        if(ch)  cout << "No Alone Num";
        cout << '\n';
    }
    return 0;
}