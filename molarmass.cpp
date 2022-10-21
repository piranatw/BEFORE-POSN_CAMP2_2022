#include<bits/stdc++.h>
using namespace std;
stack<int> st;
char str[110];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q,sum;
    cin >> q;
    while(q--){
        cin >> str;
        int len = strlen(str);
        for(int i=0;i<len;i++){
            if(str[i] == '('){
                st.push(0);
            }
            else if(str[i] == ')'){
                sum = 0;
                while(!st.empty() && st.top() != 0){
                    sum+=st.top();
                    st.pop();
                }
                st.pop();
                st.push(sum);
            }
            else if(isalpha(str[i])){
                if(str[i] == 'H')
                    st.push(1);
                else if(str[i] == 'C')
                    st.push(12);
                else
                    st.push(16);
            }
            else{
                sum = st.top();
                st.pop();
                st.push(sum*(str[i]-'0'));
            }
        }
        sum = 0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        cout << sum << '\n';
    }
    return 0;
}
