#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, m, k;
        cin >> n >> m >> k;
        int lists[m], answers[k];
        set<int> s;
        for(int i = 1; i <= n; i++){
            s.insert(i);
        }
        for(int i = 0; i < m; ++i){
            cin >> lists[i];
        }
        for(int i = 0; i < k; ++i){
            cin >> answers[i];
            s.erase(answers[i]);
        }
        // cout << *(s.begin()) << '\n';
        if(n-k == 0){
            for(int i = 0; i < m; ++i){
                cout << "1";
            }
            cout << '\n';
        }else if(n-k > 1){
            for(int i = 0; i < m; ++i){
                cout << "0";
            }
            cout << '\n';
        }else{
            for(int i = 0; i < m; ++i){
                if(s.count(lists[i])==0){
                    cout << "0";
                }else{
                    cout << "1";
                }
            }
            cout << '\n';
        }
    }
    return 0;
}