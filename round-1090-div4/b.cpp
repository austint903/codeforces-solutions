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
        int curr=0;
        for(int j=0;j<7;++j){
            cin>>t;
            vt[j]=t;
        }
        sort(vt.begin(), vt.end());
            for(int k=0;k<6;++k){
                curr-=vt[k];
            }
        curr+=vt[6];
        res[i]=curr;
    }
    for(int x:res){
        cout<<x<<endl;
    }
    return 0;
}

