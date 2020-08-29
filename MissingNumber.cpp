#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, a, s = 0;
    cin >> n;
 
    for(ll i = 1; i < n; i++){
        cin >> a;
        s += a;
    }
 
    ll tot = (n*(n+1))/2;
 
    cout << tot - s;
 
    return 0;
}
