#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

vector <int> v[MxN+10];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int num; cin >> num;
            v[i].push_back(num);
        }
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

