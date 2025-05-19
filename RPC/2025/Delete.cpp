#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string S, S2, S4 = "";
    set<char> S3;
    getline(cin, S);
    getline(cin, S2);
    for(ll i = 1; i < S2.size()-1; ++i){
        S3.insert(S2[i]);
    }
    for(ll i = 0; i < S.size(); ++i){
        if(!S3.count(S[i])){
            if(S4.size() == 0){
                if(S[i] != ' '){
                    S4 += S[i];
                }
            }
            else{
                if(S[i] != S4[S4.size()-1]){
                    S4 += S[i];
                }
            }
        }
    }
    while(S4[S4.size()-1] == ' '){
        S4 = S4.erase(S4.size()-1);
        if(S4.size() == 0)
            break;
    }
    cout << S4 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    // cin >> T;
    while(T--){
        solve();
    }
}
/*
king lokif bfbbddddafbbtggffaf kong bsbtbgrgugfcgtfugrfegg bigbig kjong kiko
[bfghijklmno]
auub attb appb aoob appb aeeb annb a22b a00b a22b a55b
[ abc]
*/