#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[100010];
vector <int>    prime;
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
//    a[2]=1;
//    for(int i=3;i<=100000;i+=2){
//        if(!i%2)    a[i]=1;
//    }
//    for(int i=3;i<=100000;i+=2){
//        if(a[i])    for(int j=i*i;j<=100000;j+=i){
//            if(a[j])    a[j]=0;
//        }
//    }
    while(q--){
        int num;
        cin >> num;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                while(num%i==0){
                    num=num/i;
                    prime.push_back(i);
                }
            }
        }
        if(num!=1)  prime.push_back(num);
        sort(prime.begin(),prime.end());
        for(int i=0;i<prime.size();i++){
            if(i==prime.size()-1)   cout << prime[i] << '\n';
            else        cout << prime[i] << " x ";
        }
        prime.clear();
    }
    return 0;
}
