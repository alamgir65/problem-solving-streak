#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
ll countPairs(ll k, ll l1, ll r1, ll l2, ll r2) {
    long long count = 0;

    for (ll power = 1; power <= r2; power *= k) {
        if (power > r2) break;
        ll minX = max(l1, (l2 + power - 1) / power); 
        ll maxX = min(r1, r2 / power);
        if (minX <= maxX) {
            count += maxX - minX + 1; 
        }
        if (power > r2 / k) break;
    }

    return count;
}
void solve(){
    long long k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    out(countPairs(k, l1, r1, l2, r2))
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}