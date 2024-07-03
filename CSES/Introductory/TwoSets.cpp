#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll sum = n * (n+1) /2;
    if(sum & 1){
        cout << "NO\n";
        return 0;
    }
    set<int, greater<int>> all_nums;
    for(int i = 1; i <= n;++i){
        all_nums.insert(i);
    }
    int matchVal = sum/2;
    while(matchVal !=0){

    }
    return 0;
}