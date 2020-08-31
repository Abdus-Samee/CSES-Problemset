#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin >> s;
 
    sort(s.begin(), s.end());
 
    int count = 0;
    vector<string> ans;
 
    do{
        ans.pb(s);
        count++;
    }while(next_permutation(s.begin(), s.end()));
 
    cout << count << endl;
    for(int i = 0; i < (int)ans.size(); i++) cout << ans[i] << endl;
 
    return 0;
}
