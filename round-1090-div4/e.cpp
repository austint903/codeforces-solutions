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
        vector<int>vt(n);
        for(int i =0;i<n;++i){
            cin>>vt[i];
        }
        int best = INT_MIN;
        for(int i =0;i<n;++i){
            for(int j =i+1;j<n;++j){
                best = max(vt[i] ^ vt[j], best);
            }
        }
        cout<<best<<'\n';
    }
    return 0;
}

