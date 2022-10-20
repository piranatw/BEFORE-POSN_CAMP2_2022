#include <bits/stdc++.h>
using namespace std;
char a[1001][1001];
int main(){
    int n,q;
    cin >> q;
    while(q--){
        cin >> n;
        for(int i=0;i<=2*n;i++){
            for(int j=0;j<=2*n;j++){
                if(j%2==0&&i<=j)    cout << "*";
                else if (i%2==0&&j<=i)  cout << "*";
                else if(i==0||j==0) cout << "*";
                else    cout << "-";
            }
            cout << '\n';
        }
    }
}