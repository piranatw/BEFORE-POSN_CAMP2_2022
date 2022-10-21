#include <bits/stdc++.h>
using namespace std;
stack <char>    st;
char a[150];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while(q--){
        string k;
        cin >> a;
        int len=strlen(a);
        if(len%2==1){
            cout << "No\n";
            continue;
        }
        for(int i=0;i<len;i++){
            if(k[i]=='('||k[i]=='[')
                st.push(k[i]);
            if(k[i]==')'&&st.top()=='(')
                st.pop();
            if(k[i]=='['&&st.top()==']')
                st.pop();
        }
        if(st.empty())  cout << "Yes\n";
        else            cout << "No\n";
    }
    return 0;
}
