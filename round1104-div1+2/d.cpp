#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/

void solve(){
    int n;
    cin >> n;

    vector<char>vt(n);
    for(int i =0;i<n;++i){
        cin >> vt[i];
    }

    int arr[3] = {1,0,0};
    int seq=1,  prefix=0;
    long long res=0;
    for(int i =0;i<n;++i){
        vt[i] == '1' ? prefix +=1 : prefix-=1;
        res+= (arr[0] + arr[1] + arr[2] - arr[((prefix%3)+3)%3]);
        arr[((prefix%3)+3)%3]+=1;
        
        if(i>=1){
            vt[i] == vt[i-1] ? seq=1 : seq+=1;
        }

        res-= (seq-1)/2;
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

