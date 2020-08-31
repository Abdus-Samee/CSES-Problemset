#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<ll> vll;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    cin >> n;
 
    vll v(n);
 
    for(ll i = 0; i < n; i++) cin >> v[i];
 
    sort(v.begin(), v.end());
 
    ll cost = 0;
 
    for(ll i = 0; i < n; i++) cost += abs(v[n/2] - v[i]);
 
    cout << cost;
 
    return 0;
}
