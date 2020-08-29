#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, x;
    cin >> n >> x;
 
    vector<ll> v(n);
    map<ll, vector<ll> > mp; //num, idx
 
    for(ll i = 0; i < n; i++) cin >> v[i];
 
    for(ll i = 0; i < n; i++) mp[v[i]].pb(i+1);
 
    for(ll i = 0; i < n; i++){
        if(!mp[x - v[i]].empty()){
            vector<ll> temp = mp[x - v[i]];
            for(vector<ll>::iterator el = temp.begin(); el != temp.end(); el++){
                if((*el) != i+1){
                    cout << i+1 << ' ' << *el;
                    return 0;
                }
            }
        }
    }
 
    cout << "IMPOSSIBLE";
 
    return 0;
}
