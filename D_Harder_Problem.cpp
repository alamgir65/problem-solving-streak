#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    map<int,int> mp,mp2;
    vector<int> tmp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            tmp.push_back(i);
        }
    }
    vector<int> ans(n);
    int sz=tmp.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(mp2[a[i]] == 0){
            ans[i]=a[i];
        }else{
            ans[i]=tmp[j++];
        }
        mp2[ans[i]]++;
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
