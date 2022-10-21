#include <bits/stdc++.h>
using namespace std;
stack <char>    st;
char k[150];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
//        string k;
        cin >> k;
        int len=strlen(k);
        int ch=0;
        for(int i=0;i<len;i++){
            if(k[i]=='('||k[i]=='[')
                st.push(k[i]);
            else if(!st.empty()&&k[i]==')'&&st.top()=='(')
                st.pop();
            else if(!st.empty()&&k[i]==']'&&st.top()=='[')
                st.pop();
            else ch=1;
        }
        if(st.empty()&&ch==0)  cout << "Yes\n";
        else            cout << "No\n";
        while(!st.empty()){
            st.pop();
        }
    }
    return 0;
}
