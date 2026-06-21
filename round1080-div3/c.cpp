#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/

void solve(){
    int n;
    cin >> n;

    vector<int>arr(n);
    for(int i =0;i<n;++i){
        cin>>arr[i];
    }

    int res=0;
    for(int i =1;i<n;++i){
        if(7-arr[i] == arr[i-1] || arr[i-1] == arr[i]){
            ++res;
            int x = i+1 < n ? arr[i+1] : -1;
            for(int j =1;j<7;++j){
                if(j != arr[i-1] && j != 7-arr[i-1] && j != x && j != 7-x){
                    arr[i] = j;
                    break;
                }
            }
        }
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

