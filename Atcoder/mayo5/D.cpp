#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> balls(n,0);
    for(int i = 0; i < n; ++i) cin >> balls[i];
    for(int i = 0; i < m; ++i){
        int t, hand;
        cin >> t;
        hand = balls[t];
        balls[t] = 0;
        int part = hand / n;
    }

    for(int i = 0; i < n; ++i) cout << balls[i] << " \n"[i==n-1];
    return 0;
}