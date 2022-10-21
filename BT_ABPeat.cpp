#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

queue <int> qu;
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        string s;
        int k;
        cin  >> s >> k;
        int len=s.size();
        int sz=0,cnt=0,mx=-1e9;
        for(int i=0;i<len;i++){
            if(s[i]=='A'){
                qu.push(1);
                sz++;
            }
            else if(s[i]=='B' && cnt < k){
                qu.push(0);
                sz++,cnt++;
            }
            else{
                while(qu.front()!=0){
                    qu.pop();
                    sz--;
                }
                qu.pop();
                qu.push(0);
            }
            mx=max(mx,sz);
        }
        cout << mx << '\n';
        while(!qu.empty()){
            qu.pop();
        }
    }
    return 0;
}

