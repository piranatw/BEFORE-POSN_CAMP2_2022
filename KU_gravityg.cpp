#include <bits/stdc++.h>
using namespace std;
int cntx[1001],cnty[1001];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;cin >> n;
    char k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> k;   if(k=='.')  continue;
            cntx[i]++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=cntx[i];j++){
            cnty[j]++;
        }
    }
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<=n-cnty[j])  cout << '.';
            else            cout << '#';
        }
        cout << '\n';
    }
    return 0;
}
