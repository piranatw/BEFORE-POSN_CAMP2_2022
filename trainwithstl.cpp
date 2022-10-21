#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<int a,int b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

list <int>  w;
list <int> :: iterator it,it2;
//void printlist(){
//    for(auto &x: w) cout << x << " ";
//    cout << '\n';
//}
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n,m;
    string opr;
    w.push_front(999);
    it=w.begin();
    cin >> n;
    while(n--){
        cin >> opr;
        if(opr=="add"){
            cin >> m;
            it2=it;
            it2++;
            w.insert(it2,m);
        }
        else if(opr=="next"){
            it2=it;
            it2++;
            if(it2!=w.end()){
                it++;
            }
        }
        else if(opr == "head"){
            it=w.begin();
        }
        else if(opr == "tail"){
            it=w.end();
            it--;
        }
        else if(opr=="remove"){
            it2=it;
            it2++;
            if(it2!=w.end()){
                it++;
                it = w.erase(it);
                it--;
            }
        }
        else if(opr=="call"){
            cout << *it << '\n';
        }
        else if(opr == "list"){
            for(;it!=w.end();it++){
                cout << *it << ' ';
            }
            cout << '\n';
            it--;
        }
    }
    return 0;
}

