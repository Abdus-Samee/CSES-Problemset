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
 
    int arr[26] = {0};
    int odd = 0;
    int l = s.length();
    int a;
 
    for(int i = 0; i < l; i++) arr[s[i] - 'A']++;
    for(int i = 0; i < 26; i++){
        if(arr[i]%2) odd++, a = i;
    }
 
    if(odd > 1) cout << "NO SOLUTION";
    else if(odd){
        char ans[l];
        int k = 0;
        for(int i = 0; i < 26; i++){
            if(i == a) continue;
            for(int j = 1; j <= arr[i]/2; j++) ans[k++] = i+'A';
        }
        for(int j = 1; j <= arr[a]; j++) ans[k++] = a+'A';
        for(int i = 25; i >= 0; i--){
            if(i == a) continue;
            for(int j = 1; j <= arr[i]/2; j++) ans[k++] = i+'A';
        }
        for(int i = 0; i < l; i++) cout << ans[i];
    }else{
        char ans[l];
        int k = 0;
        for(int i = 0; i < 26; i++){
            for(int j = 1; j <= arr[i]/2; j++) ans[k++] = i+'A';
        }
        for(int i = 25; i >= 0; i--){
            for(int j = 1; j <= arr[i]/2; j++) ans[k++] = i+'A';
        }
        for(int i = 0; i < l; i++) cout << ans[i];
    }
 
    return 0;
}
