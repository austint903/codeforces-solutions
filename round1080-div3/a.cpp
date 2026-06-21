#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/

void solve(){
    int n, v;
    cin >> n;
    bool yes1 = 0;
    for(int i =0;i<n;++i){
        cin >> v;
        if(v==67) yes1 =1;
    }
    cout << (yes1 ? "YES" : "NO") << '\n'; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

