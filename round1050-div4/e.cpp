#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>arr(n);
    unordered_map<int,int>freq, goal, curr;
    for(int i =0;i<n;++i){
        cin >> arr[i];
        ++freq[arr[i]];
    }
    ll res=0;
    for(auto& a : freq){
        if(a.second%k!=0){
            cout << 0 << '\n';
            return;
        }
        goal[a.first] = a.second/k;
    }
    int left=0;
    for(int right=0;right<n;++right){
        curr[arr[right]]++;
        while(curr[arr[right]] > goal[arr[right]]){
            curr[arr[left]]--;
            ++left;
        }
        res+=(right-left+1);
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

