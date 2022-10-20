#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int A,B,C,*P,*Q;
    A=1;
    B=2;
    C=3;
    cout << A << B << C << '\n';
    P=&A;
    cout << A <<' ' << B <<' '<< C <<' '<< *P<<' ' << &P << '\n';
    *P=C;
    cout << A <<' '<< B<<' ' << C<<' ' << *P<<' ' << P << '\n';
    P=&B;
    cout << A <<' '<< B <<' '<< C <<' '<< *P <<' '<< P <<' '<< '\n';
    return 0;
}