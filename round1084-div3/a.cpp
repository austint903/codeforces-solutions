#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin>>t;

    while(t--){
        cin>>n;
        int high =0, val;
        unordered_map<int,int>mp;
        for(int i =0;i<n;++i){
            cin>>val;
            high = max(high, val);
            ++mp[val];
        }
        cout << mp[high] << '\n';
    }
    return 0;
}

