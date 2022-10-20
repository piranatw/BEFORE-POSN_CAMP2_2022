#include <stdio.h>
#define endl printf("\n")
int dpf[1001],dpb[1001],a[1001];
int main(){
    int q;
    scanf("%d",&q);
    while(q--){
        int n,ans=-1,i;
        scanf("%d",&n);
        for( i=1;i<=n;i++)   scanf("%d",&a[i]);
        dpb[n + 1] = 0;
        for( i=1;i<=n;i++){
            if(a[i]==0) dpf[i]=dpf[i-1]+1;
            else    continue;
        }
        for( i=n;i>=1;i--){
            if(a[i]==0) dpb[i]=dpb[i+1]+1;
            else    continue;
        }
        int maxx=0;
        for( i=1;i<=n;i++){
            if(maxx<dpb[i]&&dpf[i]==dpb[i]){
                maxx=dpb[i];
                ans=i-1;
            }
        }
        printf("%d\n",ans);
        for( i=1;i<=n;i++){
            dpf[i]=dpb[i]=0;
        }
    }
    return 0;
}