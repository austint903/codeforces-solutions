#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>>vt (n, vector<int>(2));
    for(int i = 0;i < n; ++i){
        cin >> vt[i][0] >> vt[i][1];
    }
    int res =0, currSide=0, currMin=0;
    for(int i =0;i<n;++i){
        int nextMin = vt[i][0], nextSide=vt[i][1];
        if(((nextMin - currMin)%2==0 && currSide !=nextSide) || ((nextMin - currMin)%2==1 && currSide == nextSide)){
            res+=(nextMin-currMin-1);
            currSide = nextSide;
            currMin = nextMin;
        } 
        else{
            res+=(nextMin-currMin);
            currMin = nextMin;
            currSide = nextSide;
        }
    }
    if(currMin < m){
        res += (m-currMin);
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

