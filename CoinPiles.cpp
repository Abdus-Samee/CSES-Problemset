
#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll t, a, b;
    cin >> t;
 
    while(t--){
        cin >> a >> b;
 
        if(a < b) swap(a, b);
 
        if(a > 2*b) cout << "NO\n";
        else if((a+b)%3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
 
    return 0;
}
