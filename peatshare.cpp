#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[100100];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,q;
    cin >> q;
    while(q--){
        cin >> n;
        int ch=0;
        for(int i=1;i<=n;i++){
            cin >> a[i];
            a[i]+=a[i-1];
        }
        int num=a[n]/2;
        int l=lower_bound(a+1,a+n+1,num)-a;
        if(a[n]%2==1){
            cout << "NO" << endl;
            continue;
        }
        if(a[l]==num){
            cout  << l << endl;
            continue;
        }
        for(int i=1;i<=n;i++){
            if(a[i] < num)  continue;
            int tmp=a[i]-num;
            int jk=lower_bound(a+1,a+n+1,tmp)-a;
            if(a[jk]==tmp){
                cout << jk    << ' ' << i << endl;
                ch=1;
                break;
            }
        }
        if(!ch) cout<< "NO"<<'\n';
    }
    return 0;
}