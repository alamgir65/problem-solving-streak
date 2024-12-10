#include<bits/stdc++.h>
#define ll long long
#define lld long double
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define print(flag) (flag)? cout<<"YES\n" : cout<<"NO\n";
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
#define dqii deque<int> 
#define dqll deque<ll> 
#define ppq priority_queue<int>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
const int N=1e5+3;
const int INF=1e9+7;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll power(ll b, ll p) {
    ll res = 1; 
    while (p > 0) {
        if (p % 2) res *= b, p--; 
        else b *= b, p /= 2;
    }
    return res;
}
ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b);}
ll lcm(ll a, ll b){ return (a*b)/gcd(a, b); }
ll nCr(ll n,ll r){
    ll a=1,b=1;
    if(n-r < r) r=n-r;
    if(r!=0){
        while(r){
            a *= n;
            b *= r;
            ll gc=gcd(a,b);
            a /= gc;
            b /= gc;
            n--,r--;
        }
    }else a=1;
    return a;
}


vector<int> v(100005);

void preCalculate(){
    v[0]=0;
    v[1]=1;
    v[2]=4;
    int limit = 1000000;
    for(int i=3;i<limit;i++){
        v[i]=(2*v[i-1])+2;
        if(v[i]>limit) break;
    }
}

// Start My own code 
void solve(){
    int n; cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++){
        if(v[i]>=n){
            ans=i;
            break;
        }
    }
    out(ans)
}
love{
    Alamgir
    preCalculate();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;    
}