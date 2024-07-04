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
    int groups = n / 2;
    set<int> ans1, ans2;
    while(!all_nums.empty()){
        if(ans1.size() < groups){
            
        }else{

        }
    }
    return 0;
}