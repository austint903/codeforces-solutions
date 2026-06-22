#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/

void solve(){
    int n, m, x, y, temp;
    cin >> n >> m >> x >> y;
    int res=0;
    for(int i =0 ;i<n; ++i){
        ++res;
        cin >> temp;
    }
    for(int i =0; i<m;++i){
        ++res;
        cin >> temp;
    }
    cout << res << '\n';
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

