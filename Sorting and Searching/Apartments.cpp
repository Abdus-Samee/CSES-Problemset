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

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vi a(n);
    vi b(m);
    multiset<int> ms; //using in place of vector because the search operation is quicker...O(log n)
    int x;

    FORL(i, 0, n) cin >> a[i];
    FORL(i, 0, m){
        cin >> x;
        ms.insert(x);
    }

    sort(all(a));

    ll ans = 0;

    FORL(i, 0, n){
        auto it = ms.lower_bound(a[i]-k);
        if((it != ms.end()) && (*it <= (a[i]+k))){
            ans++;
            ms.erase(it);
        }
    }

    cout << ans;

    return 0;
}
