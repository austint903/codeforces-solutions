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
    map<int,int>mp;
    for(int i =0;i<n; ++i){
        mp[i] = arr[i];
    }
    
    for(auto it = mp.begin(); it != mp.end();) {
        auto[key, value] = *it;
        for(int i = key+1; i<n; ++i){
            if(arr[i] > value){
                mp[i] = value, arr[i]=value;
                break;
            }
        }
        auto next = mp.erase(it);
        it = next;
    }
    cout << accumulate(arr.begin(), arr.end(), 0) << '\n';
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

