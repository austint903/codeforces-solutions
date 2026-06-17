#include <bits/stdc++.h>

#define ll long long

using namespace std;
/*
    author: mrtan
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, x, y, n;
    cin>>t;
    while(t--){
        cin >> n >> x >> y;
        vector<int>arr(n);
        for(int i =0;i<n;++i){
            cin >> arr[i];
        }
        vector<int>mid(arr.begin() + x, arr.begin()+y);

        //find best rotation
       
        int index = min_element(mid.begin(), mid.end()) - mid.begin();
        rotate(mid.begin(), mid.begin()+index, mid.end());

        vector<int>left(arr.begin(), arr.begin() + x);
        vector<int>right(arr.begin() + y, arr.end());

        vector<int>LR = left;
        LR.insert(LR.end(), right.begin(), right.end());
        
        int j=0;
        for(int i =0;i<LR.size(); ++i){
            if(mid[0] > LR[i]){
                ++j;
            }
            else{
                break;
            }
        }
        LR.insert(LR.begin() + j, mid.begin(), mid.end());
        for(int x : LR){
            cout << x << " ";
        }
        cout << '\n';
        

    }
    return 0;
}

