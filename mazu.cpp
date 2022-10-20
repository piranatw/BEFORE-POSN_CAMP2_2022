#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
stack <char> st;

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    while(n--){
        char k;
        cin >> k;
        if(st.empty()){
            st.push(k);
            continue;
        }
        if(st.top()==k){
            st.pop();
            continue;
        }
        st.push(k);
    }
    for(int i=1;i<=st.size();i++){
        char now=st.top();
        st.pop();
        if(st.top()==now)   st.pop();
        else st.push(now);
    }
    cout << st.size() <<'\n';
    if(st.empty()){
        cout << "empty";
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}