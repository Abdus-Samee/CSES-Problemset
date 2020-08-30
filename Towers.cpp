#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

typedef vector<int> vi;
typedef vector<ll> vll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, curr;
    cin >> n;
    
    vi v;
    
    for (int i = 0; i < n; i++){
      cin >> curr;
      auto it = upper_bound(v.begin(), v.end(), curr);
      if (it == v.end()){
        v.push_back(curr);
      }
      else{
        *it = curr;
      }
    }
    
    cout << v.size() << endl;

    return 0;
  }
