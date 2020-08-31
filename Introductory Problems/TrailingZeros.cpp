#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n, count = 0;
    cin >> n;
 
    for(ll i = 5; i <= n; i*=5){
        count += (n/i);
    }
 
    cout << count;
 
    return 0;
}
