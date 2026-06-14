#include <bits/stdc++.h>

using namespace std;
/*
    author: mrtan
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n; 
    for(int i =0;i<n;++i){
        cin>>x;
        if(x==67){
            cout<<x<<endl;
        }
        else{
            cout<<x+1<<endl;
        }
    }
    return 0;
}

