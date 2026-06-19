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
    for(int i =0;i<n;++i)cin >> arr[i];

    ll mx = arr[0], curr=arr[0];
    for(int i=1; i<n; ++i){
        if(mx <= arr[i]){
            mx = max(1LL*arr[i], mx);
        }
        else{
            mx+=arr[i];
        }
    }
    cout << mx << '\n';
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

