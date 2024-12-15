#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,a,b,c; cin>>n>>a>>b>>c;
        ll ans=0;
        ans += min(n,a);
        ans += min(n,b);
        int x = (n-min(n,a))+(n-min(n,b));
        ans += min(x,c);
        cout << ans << endl;
    }
    return 0;
}
