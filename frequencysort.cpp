#include <bits/stdc++.h>
using namespace std;
struct A{
	int v,freq,pos;
	bool operator < (const A&o) const{
		if(freq!=o.freq)	return freq>o.freq;
		else				return pos<o.pos;
	}
};
int a[1010];
vector<A > ans;
void solve(){
	int n,c;
	cin >> n >> c;
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=0;i<n;i++){
		int ch = 0;
		for(auto x:ans){
			if(x.v == a[i]){
				ch = 1;
				break;
			}
		}
		if(ch)	continue;
		int cnt = 0;
		for(int j=i;j<n;j++)
			cnt+=(a[i] == a[j]);
		ans.push_back({a[i],cnt,i});
	}
	sort(ans.begin(),ans.end());
	for(auto x:ans){
		for(int i=1;i<=x.freq;i++)
			cout << x.v << ' ';
	}
}
int main(){
	ios_base::sync_with_stdio(0);	cin.tie(0),cout.tie(0);
	int q = 1;
	solve();
	return 0;
}