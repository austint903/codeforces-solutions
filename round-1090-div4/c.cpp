#include <bits/stdc++.h>

using namespace std;
/*
    author: mrtan
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, p;
    cin>>n;
    while(n--){
        cin>>p;
        int left=1, right=3*p;
        for(int i =0;i<p;++i){
            cout<<left<<" "<<right<<" "<<right-1<<" ";
            ++left, right-=2;
        }        
    }
    return 0;
}

