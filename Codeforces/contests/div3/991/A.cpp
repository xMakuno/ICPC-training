#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<int> words(n+1);
        for(int i = 1; i <= n; ++i){
            string s;
            cin >> s;
            words[i] = words[i-1] + s.size();
        }
        int fuck = upper_bound(words.begin(),words.end(),m) - words.begin();
        fuck--;
        cout << fuck << endl;
    }
    return 0;
}