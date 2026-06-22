#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/

void solve(){
    int n, temp;
    cin >> n;
    vector<int>even, odd;
    for(int i =0;i<n;++i){
        cin>>temp;
        if(temp%2==0){
            even.push_back(temp);
        }
        else odd.push_back(temp);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    if(odd.size() ==0){
        cout << 0 << '\n';
        return;
    }
    ll res=0;
    int oddLeft=0, oddRight = odd.size()-1;
    res+=odd[oddRight--];

    res += accumulate(even.begin(), even.end() ,0LL);
    
    bool on=1;
    while(oddLeft<=oddRight){
        if(on){
            ++oddLeft;
            on=0;
        }
        else{
            on=1;
            res+=odd[oddRight--];
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

