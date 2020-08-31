#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;
 
const int mod = 1e9 + 7;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    cin >> n;
 
    vll v(n);
 
    for(ll i = 0; i < n; i++) cin >> v[i];
 
    ll s = v[0];
    ll cur = v[0];
 
    for(ll i = 1; i < n; i++){
        cur = max(v[i], cur+v[i]);
        s = max(s, cur);
    }
 
    cout << s;
 
    return 0;
}
