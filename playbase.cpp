#include <bits/stdc++.h>
using namespace std;
char a[1001],b[1001],ans[1001];
int n,t=0;
int to10(char h[]){
    int len=strlen(h),sum=0;
    for(int i=0,k=len-1;i<len,k>=0;i++,k--){
        if(isdigit(h[i])){
            sum+=(h[i]-'0')*pow(n,k);
        }
        else{
            sum+=(h[i]-'A'+10)*pow(n,k);
        }
    }
    return sum;
}
int ton(int s){
    while(s>0){
        int r=s%n;
        printf("%d",r);
        s=s/n;
        if(r>10)    ans[t++]=r+'0';
        else        ans[t++]=r-10+'A';
    }
}
int main(){
    cin >> n >> a >> b;
    int n1=to10(a),n2=to10(b);
    cout << n1+n2 << '\n';
    if(n==10){ 
        cout << n1+n2;
        return 0;
    }
    ton(n1+n2);
    int lenans=strlen(ans);
    for(int i=t;i>=0;i--){
        printf("%c",ans[i]);
    }
    return 0;
}