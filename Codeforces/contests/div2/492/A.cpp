#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int coins[5] = { 1, 5, 10, 20, 100};

int main(){
    int N;
    cin >> N;
    int ptr = 4, ans = 0;
    while(N > 0){
        if(ptr == 0){
            ans += N;
            break;
        }
        if(coins[ptr] <= N){
            ans+= N/coins[ptr];
            N = N % coins[ptr];
        }else{
            ptr--;
        }
    }
    cout << ans << '\n';
    return 0;
}