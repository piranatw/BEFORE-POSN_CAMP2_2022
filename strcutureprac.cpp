#include <bits/stdc++.h>
using namespace std;
struct A{
    int stdnum,age,sc;
    string name;
    bool operator > (const A&o) const{
        if(age!=o.age)  return age<o.age;

    }
}a[10010];
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i].stdnum >> a[i].name >> a[i].age >> a[i].sc;
    }
    return 0;
}