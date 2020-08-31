#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    cin >> n;
 
    vector<ll> v(n);
    ll acc = 0;
    ll ans = INT_MAX;
 
    for(ll i = 0; i < n; i++) {
        cin >> v[i];
        acc += v[i];
    }
 
    for(ll i = 0; i < (1<<n); i++){
        ll s = 0;
        for(int j = 0; j < n; j++){
            if(i & (1<<j)) s += v[j];
        }
        ll cur = abs((acc-s)-s);
        ans = min(ans, cur);
    }
 
    cout << ans;
 
    return 0;
}
