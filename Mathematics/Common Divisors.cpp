#include <bits/stdc++.h>

#define ll long long
#define PB push_back
#define MP make_pair
#define PF push_front
#define all(v) begin(v), end(v)
#define sz(v) (int)(v).size()
#define ft first
#define sc second

#define FOR(i, a, b) for(int i = (a); i <= (b); i++)
#define REP(i, a, b, c) for(int i = (a); i <= (b); i += (c))
#define FORL(i, a, b) for(int i = (a); i < (b); i++)
#define ROF(i, a, b) for(int i = (a); i >= (b); i--)
#define ROFL(i, a, b) for(int i = (a); i > (b); i--)
#define LLFOR(i, a, b) for(ll i = (a); i <= (b); i++)
#define LLFORL(i, a, b) for(ll i = (a); i < (b); i++)
#define LLROF(i, a, b) for(ll i = (a); i >= (b); i--)
#define LLROFL(i, a, b) for(ll i = (a); i > (b); i--)


using namespace std;

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;

const int mod = 1e9 + 7;
const double PI = acos(-1);

ll exp(ll x,ll n){
    if(n == 0) return 1;
    if(n == 1) return x;
    if(n%2 == 0) return exp((x*x)%mod,n/2);
    if(n%2 == 1) return (x*exp((x*x)%mod,n/2))%mod;
}

ll modpow(ll b, ll p, ll m)
{
    ll r = 1;
    while(p){
        if(p & 1) r = r*b%m;
        b = b*b%m;
        p /= 2;
    }

    return r;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;

    vector<ll> x(n);
    vector<ll> cnt(1000001, 0);

    LLFORL(i, 0, n){
        cin >> x[i];
        cnt[x[i]]++;
    }

    for(int i = 1000000; i >= 1; i--)
    {
        ll d=0;
        for(int j = i; j <= 1000000; j += i) d += cnt[j];
        if(d >= 2)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}
