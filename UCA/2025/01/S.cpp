#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
using namespace std;

struct w{
    ll s;
    ll p;
    ll e;
};

bool comp(w a, w b){
    return a.s < b.s;
}



int main(){
    ll N;
    cin >> N;
    vector<w> v;
    for(ll i =0; i < N; ++i){
        w wave;
        ll temp;
        cin >> wave.s >> wave.p >> temp;
        wave.e = wave.s + temp;
        v.push_back(wave);
    }
    sort(v.begin(), v.end(),comp);
    vector<ll> memo(N, -1);
    // dp();
    return 0;   
}