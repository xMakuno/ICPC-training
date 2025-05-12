#include<bits/stdc++.h>
#define INF 1e9+7
using namespace std;

void BU(){
    int n;
    cin >> n;
    vector<int> h(n+1, 0);
    for(int i = 0; i < n; ++i){
        cin >> h[i+1];
    }
    vector<int> memo(n+1);
    memo[0] = INF;
    for(int i = 2; i <=n; ++i){
        int one = memo[i-1] + abs(h[i]-h[i-1]);
        int two = memo[i-2] + abs(h[i]-h[i-2]);
        memo[i] = min(one, two);
    }
    cout << memo[n] << endl;
}

int main(){
    BU();
    return 0;
}