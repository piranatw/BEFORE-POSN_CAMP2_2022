#include <bits/stdc++.h>
#define MxN 10001
#define pii(a,b) pair<a,b>

using namespace std;
const int di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
char k[100][1111],tmp[1001];
int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin>>q;
    while(q--){
        int i=0;
        cin >> k[i];
        i++;
    }
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            if(k[i]<k[j]){
                strcpy(tmp,k[i]);
                strcpy(k[i],k[j]);
                strcpy(k[j],tmp);
            }
            else if(k[i]==k[j]){
                if(k[i][0]<k[j][1]){
                    strcpy(tmp,k[i]);
                    strcpy(k[i],k[j]);
                    strcpy(k[j],tmp);
                }
            }
        }
    }
    return 0;
}