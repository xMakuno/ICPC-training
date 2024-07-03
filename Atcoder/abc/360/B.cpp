#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string S, T;
    cin >> S >> T;
    if(T.size() == 1){
        for(int i = 0; i < S.size()-1; ++i){
            if(S[i] == T[0]){
                cout << "Yes\n";
                return 0;
            }
        }
        cout << "No\n";
        return 0;
    }
    int limit = T.size()-1;
    vector<string> lanes(limit, "");
    for(int i = 0; i < S.size(); ++i){
        lanes[i%limit] += S[i];
    }
    for(string s: lanes){
        if(s == T){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}