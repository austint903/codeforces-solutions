#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/

void solve(){
    int n;
    cin>>n;
    vector<int>a(n), b(n), c(n);
    unordered_map<int,int>mp;
    
    for(int i =0;i<n;++i){
        cin>>a[i];
    }
    for(int i =0;i<n;++i){
        cin>>b[i];
    }
    for(int i =0;i<n;++i){
        bool found=0;
        for(int j =0 ;j<n;++j){
            if(mp.find(j)==mp.end() && a[j] <=b[i]){
                mp[j]=i;
                c[i] = j;
                found=1;
                break;
            }
        }
        if(!found){
            cout << "-1" << '\n';
            return;
        }
    }

    int res = 0;
    for(int i = 0; i<n; ++i ){
        for(int j =i+1; j<n; ++j){
            if(c[i] > c[j]){
                ++res;
            }
        }
    }
    cout<< res << '\n';
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

