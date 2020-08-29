#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, count = 0;
    cin >> n;
 
    vector<ll> v(n);
 
    for(ll i = 0; i < n; i++) cin >> v[i];
 
    for(ll i = 1; i < n; i++){
        if(v[i] < v[i-1]) count += (v[i-1] - v[i]), v[i] = v[i-1];
    }
 
    cout << count;
 
    return 0;
}
