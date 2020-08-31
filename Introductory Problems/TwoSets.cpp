#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    bool last = true;
    bool poss = false;
    cin >> n;
 
    ll sum = (n*(n+1))/2;
    ll s = 0;
    ll count = 0;
 
    ll freq[n+1];
    memset(freq, 0, sizeof(freq));
 
    for(ll i = 1, j = n; (i<=n)&&(j>=1);){
        if(last){
            last = false;
            freq[j]++;
            s += j;
            sum -= j;
            count++;
            j--;
        }else{
            last = true;
            freq[i]++;
            s += i;
            sum -= i;
            count++;
            i++;
        }
 
        if(s == sum){
            poss = true;
            break;
        }else if(s > sum){
            break;
        }
    }
 
    if(!poss) cout << "NO";
    else{
        cout << "YES\n" << count << endl;
        for(ll i = 1; i <= n; i++) if(freq[i]) cout << i << ' ';
        cout << '\n' << n - count << endl;
        for(ll i = 1; i <= n; i++) if(!freq[i]) cout << i << ' ';
    }
 
    return 0;
}
