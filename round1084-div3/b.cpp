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
        bool yes=0;
        vector<int>vt(n);
        for(int i =0;i<n;++i){
            cin>>vt[i];
        }
        for(int i =1;i<n;++i){
            if(vt[i-1] > vt[i]){
                yes=1;
                break;
            }
        }
        cout << (yes==1 ? 1 : n) << '\n';
    }
    return 0;
}

