#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll n;
    cin >> n;
 
    vector<int> ans;
    bool valid = true;
 
    for(int i = 2; i <= n; i+=2) ans.pb(i);
    for(int i = 1; i <= n; i+=2) ans.pb(i);
 
    for(int i = 0; i < (int)ans.size()-1; i++){
        if(abs(ans[i] - ans[i+1]) == 1){
            valid = false;
            break;
        }
    }
 
    if(valid) for(int i = 0; i < (int)ans.size(); i++) cout << ans[i] << ' ';
    else cout << "NO SOLUTION";
 
    return 0;
}
