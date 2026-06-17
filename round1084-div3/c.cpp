#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/
void solve(){
    int n;
    cin>>n;
    stack<char>st;
    char c;
    for(int i=0;i<n;++i){
        cin>>c;
        if(!st.empty() && st.top() == c){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    cout<< (st.size() ==0 ? "YES" : "NO") << '\n';
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

