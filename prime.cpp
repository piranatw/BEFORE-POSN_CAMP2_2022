#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};

int a[1000001];

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int n;
    cin >> n;
    memset(a,0,sizeof a);
    a[2]=1;
    for(int i=1;i<=500000;i++){
        if(i%2==1)  a[i]=1;
    }
    for(int i=3;i<sqrt(500000);i++){
        if(a[i]){
            for(int j=i*i;j<=500000;j+=i)
                if(a[j])    a[j]=0;
        }
    }
    int count;
    for(int i=3,count=1;count<=n;i+=2){
        if(a[i])    count++;
        if(n==count){
            cout << i;
            return 0;
        }
    }
    return 0;
}   