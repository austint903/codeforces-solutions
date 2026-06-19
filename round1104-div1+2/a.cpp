#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;++i){
        cin>>arr[i];
    }
    int small = INT_MAX, res=0;
    for(int i =0; i<n; ++i){
        res+=min(arr[i], small);
        small=min(small, arr[i]);
    }
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

