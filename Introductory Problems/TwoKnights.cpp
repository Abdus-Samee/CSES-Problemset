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

int x[] = {2,1,2,1,-2,-1,-2,-2};
int y[] = {1,2,-1,-2,-1,2,1,-1};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    for(ll i = 1; i <= n; i++){
        ll tot = ((i*i)*((i*i)-1))/2;
        ll attack = 4*(i-1)*(i-2);
        cout << tot - attack << endl;
    }

    return 0;
}
