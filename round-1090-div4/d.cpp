#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*
    author: mrtan
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    vector<bool>prime(1e6+1, true);
    prime[0] = prime[1] = false;
    for(int i =2;i*i<=1e6;++i){
        if(prime[i]){
            for(int j = i*i;j<=1e6+1;j+=i){
                prime[j]=false;
            }
        }
    }
    vector<int>primes;
    for(int i =0;i<1e6+1;++i){
        if(prime[i])primes.push_back(i);
    }

    int n, a;
    cin>>n;
    vector<ll>res;
    while(n--){
        cin>>a;
        res.push_back(primes[0]);
        for(int i =1;i<a;++i){
            res.push_back(1LL*primes[i]*primes[i-1]);
        }

    }
    for(ll x:res){
        cout<<x<<" ";
    }


    return 0;
}

