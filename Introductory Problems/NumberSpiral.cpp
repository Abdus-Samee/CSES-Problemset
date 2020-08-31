#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define MP make_pair

using namespace std;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

const ll mod = 1e9 + 7;

ll exp(ll x,ll n){
    if(n == 0) return 1;
    if(n == 1) return x;
    if(n%2 == 0) return exp((x*x)%mod,n/2);
    if(n%2 == 1) return (x*exp((x*x)%mod,n/2))%mod;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t, y, x;
    cin >> t;

    while(t--){
        cin >> y >> x;

        if(x > y){
            if(x%2) cout << x*x - y +1;
            else{
                x--;
                cout << x*x + y;
            }
        }else{
            if(y%2 == 0) cout << y*y - x + 1;
            else{
                y--;
                cout << y*y + x;
            }
        }

        cout << endl;
    }

    return 0;
}
