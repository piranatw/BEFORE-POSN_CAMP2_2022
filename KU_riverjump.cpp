#include <bits/stdc++.h>
using namespace std;
char a[1001];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int l,x=1,mn;
    cin >> l;
    mn=l;
    for(int i=1;i<=l;i++)    cin >> a[i];
    for(int i=1;i<=l;i++){
        if(a[i]=='.')   continue;
        mn=min(mn,max(i-1,l-i));
    }
    cout << mn;
    return 0;
}