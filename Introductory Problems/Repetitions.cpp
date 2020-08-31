#include <bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin >> s;
 
    int l = s.length();
    int count = 1;
    int m = 0;
 
    for(int i = 1; i < l; i++){
        if(s[i] == s[i-1]) count++;
        else{
            m = max(m, count);
            count = 1;
        }
    }
 
    cout << max(m, count);
 
    return 0;
}
