#include <bits/stdc++.h>

using namespace std;
/*
    author: mrtan
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin>>n;
    vector<int>vt(7,0), res(n);
    for(int i=0;i<n;++i){
        int curr=0, mx=INT_MIN;
        for(int j=0;j<7;++j){
            cin>>t;
            curr+=t;
            mx = max(mx, t);
        }
        curr-=mx;
        res[i]=(curr*-1 +mx);
    }
    for(int x:res){
        cout<<x<<'\n';
    }
    return 0;
}

