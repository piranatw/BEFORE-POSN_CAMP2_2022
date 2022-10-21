#include <bits/stdc++.h>
using namespace std;
vector <int> ans;
int main(){
    int n;
    cin >> n;
    if(n==0){
        cout << 10;
        return 0;
    }
    if(n<0){
        cout << -1;
        return 0;
    }
    if(n==1){
        cout << 1;
        return 0;
    }
    int ch=0;
    for(int i=9;i>=2;i--){
        if(n%i==0){
                ch=1;
            while(n%i==0){
                ans.push_back(i);
                n/=i;
            }
        }
    }
    if(n>=10)   ch=0;
    if(!ch){ cout << -1;
        return 0;
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout << ans[i];
    }
    return 0;
}
