#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
const unsigned ll mod = 1e9 + 7;
 
unsigned ll power(unsigned ll num, unsigned ll pow, unsigned ll mod)
{
    unsigned long long test;
    unsigned long long n = num;
    for(test = 1; pow; pow >>= 1)
    {
        if (pow & 1)
            test = ((test % mod) * (n % mod)) % mod;
        n = ((n % mod) * (n % mod)) % mod;
    }
 
    return test;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    unsigned ll n;
    cin >> n;
 
    cout << power(2, n, mod);
 
    return 0;
}
