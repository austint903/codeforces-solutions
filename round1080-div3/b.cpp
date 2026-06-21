#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/

int odd(int x){
    while(x%2==0){
        x/=2;
    }
    return x;
}

void solve(){
    int n;
    cin >> n;
    
    vector<int>arr(n+1);
    for(int i =1;i<=n;++i){
        cin >> arr[i];
    }

    for(int i=1;i<=n;++i){
        if(odd(arr[i]) !=odd(i)){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';

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

