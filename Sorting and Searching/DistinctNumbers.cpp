//can also do it in O(n) with unordered_set

#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, count = 0;
    cin >> n;
 
    vector<ll> v(n);
 
    for(ll i = 0; i < n; i++) cin >> v[i];
 
    sort(v.begin(), v.end());
 
    for(ll i = 0; i < n; i++){
        while((i<n-1) && (v[i]==v[i+1])) i++;
        count++;
    }
 
    cout << count;
 
    return 0;
}
