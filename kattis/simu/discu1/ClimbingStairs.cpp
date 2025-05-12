#include<bits/stdc++.h>
using namespace std;

void BU(int n){
    vector<int> memo(n+1);
    memo[1] = 1;
    memo[2] = 2;
    for(int i = 3; i <= n; ++i){
        memo[i] = memo[i-1] + memo[i-2];
    }
    cout << memo[n] << endl;
}


int main(){
    int n;
    cin >> n;
    BU(n);
    return 0;
}